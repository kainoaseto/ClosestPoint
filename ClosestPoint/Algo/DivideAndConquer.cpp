//
// Created by Kainoa Seto on 3/1/17.
//

#include "DivideAndConquer.h"
#include "BruteForce.h"

// Comparison helpers for the qsort function
int compare_x(const void* a, const void* b)
{
	Point* firstPoint = static_cast<Point*>(const_cast<void*>(a));
	Point* secondPoint = static_cast<Point*>(const_cast<void*>(b));

	return (firstPoint->x - secondPoint->x);
}

int compare_y(const void* a, const void* b)
{
	Point* firstPoint = static_cast<Point*>(const_cast<void*>(a));
	Point* secondPoint = static_cast<Point*>(const_cast<void*>(b));

	return (firstPoint->y - secondPoint->y);
}

DivideAndConquer::DivideAndConquer(int numPoints, Point* points)
	: ClosestPointsAlgo(numPoints, points)
{
	SetName("DivideAndConquer");
	_num_points = numPoints;
	_points = GetPoints();
	_num_calculations = 0;
	_shortest_distance = FLT_MAX;
}

void DivideAndConquer::PrintResults()
{
	ClosestPointsAlgo::PrintResults();
	cout << "#########################################################################" << endl;
}

void DivideAndConquer::CalculateClosestPoints()
{
	for (int i = 0; i < _num_points; i++)
		_points[i].idx = i;

	qsort(_points, _num_points, sizeof(Point), compare_x);

	SetShortestDistance(closest_points_recursive(_points, _num_points));
	SetNumCalculations(_num_calculations);
	SetShortestPoints(_shortest_points);
}

// Recurses through the array of points to find the smallest distance
float DivideAndConquer::closest_points_recursive(Point* points, int numPoints)
{
	if (numPoints <= 3)
	{
		BruteForce bf(numPoints, points);
		bf.CalculateClosestPoints();
		_num_calculations += bf.GetNumCalculations();
		if (bf.GetShortestDistance() < _shortest_distance)
		{
			_shortest_points = bf.GetShortestRelativePoints();
			_shortest_distance = bf.GetShortestDistance();
		}
		return bf.GetShortestDistance();
	}

	int mid = numPoints / 2;
	Point midPoint = points[mid];

	/* 
		Calculates the smallest distance on the left side of the midpoint and
		the smallest distance on the right side of the midpoint.
	*/
	float distLeftMid = closest_points_recursive(points, mid);
	float distRightMid = closest_points_recursive(points + mid, numPoints-mid);

	float smallestLRDist = min(distLeftMid, distRightMid);
	/*
		That will get all the points that are on either side of the midpoint but everything
		that is within that or the midpoint line will be ignored until we go through those points
		and check if they would form acceptable distances.
	*/

	Point* strip = new Point[numPoints];
	int numPointsOnMid = 0;
	for (int i = 0; i < numPoints; i++)
	{
		if (abs(points[i].x - midPoint.x) < smallestLRDist)
		{
			strip[numPointsOnMid] = points[i];
			numPointsOnMid++;
		}
	}

	/*
		Now that we have all the points on the midpoint, we need to find the closest distance
		between those and compare it to the smallest distance we found earlier on the left
		and right sides of the midpoint and choose whichever one is smallest.
	*/
	return min(smallestLRDist, closest_points_strip(strip, numPointsOnMid, smallestLRDist));
}	

/*
	Finds the closest points in the given strip of points. We need to sort this according to the Y
	since sorting to the X for this lines them up. Essentially going in a direction where we can differentiate
	the points. Then we just need to check point distances until we have gone through all the points that are in the
	strip which could be at worst every point. So this will be an N operation where N is the number of points total.
*/
float DivideAndConquer::closest_points_strip(Point* strip, int numPoints, float currMinDist)
{
	float stripMinDist = currMinDist;
	qsort(strip, numPoints, sizeof(Point), compare_y);

	for (int i = 0; i < numPoints; ++i)
	{
		for (int j = i + 1; j < numPoints && (strip[j].y - strip[i].y) < stripMinDist; ++j)
		{
			_num_calculations++;
			if (strip[i].distance(&strip[j]) < stripMinDist)
			{
				stripMinDist = strip[i].distance(&strip[j]);
				if (stripMinDist < _shortest_distance)
				{
					_shortest_points = make_pair(strip[i], strip[j]);
					_shortest_distance = stripMinDist;
				}
			}
		}
	}
	
	delete[] strip;
	return stripMinDist;
}
