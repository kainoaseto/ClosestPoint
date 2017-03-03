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
}

void DivideAndConquer::PrintResults()
{
	ClosestPointsAlgo::PrintResults();
	cout << "#########################################################################" << endl;
	cout << "P" << _shortest.first.idx << " [" << _shortest.first.x << ", " << _shortest.first.y << "]" << endl;
	cout << "P" << _shortest.second.idx << " [" << _shortest.second.x << ", " << _shortest.second.y << "]" << endl;
}

void DivideAndConquer::CalculateClosestPoints()
{
	for (int i = 0; i < _num_points; i++)
		_points[i].idx = i;

	qsort(_points, _num_points, sizeof(Point), compare_x);

	_shortest = closest_points_recursive(_points, _num_points);

	SetShortestDistance(_shortest.first.distance(&_shortest.second));
	SetNumCalculations(_num_calculations);
	SetShortestPointIdxs(_shortest_idxs);
}

// Recurses through the array of points to find the smallest distance
pair<Point, Point> DivideAndConquer::closest_points_recursive(Point* points, int numPoints)
{
	if (numPoints <= 3)
	{
		BruteForce bf(numPoints, points);
		bf.CalculateClosestPoints();
		_num_calculations += bf.GetNumCalculations();
		return bf.GetShortestRelativePoints();
	}

	int mid = numPoints / 2;
	Point midPoint = points[mid];

	/* 
		Calculates the smallest distance on the left side of the midpoint and
		the smallest distance on the right side of the midpoint.
	*/
	pair<Point, Point> leftPts = closest_points_recursive(points, mid);
	pair<Point, Point> rightPts = closest_points_recursive(points + mid, numPoints - mid);
	float distLeftMid = leftPts.first.distance(&leftPts.second);
	float distRightMid = rightPts.first.distance(&rightPts.second);

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
	pair<Point, Point> stripPts = closest_points_strip(strip, numPointsOnMid, smallestLRDist);
	float dist = stripPts.first.distance(&stripPts.second);
	float finalMin = min(smallestLRDist, dist);
	

	if (finalMin < smallestLRDist)
	{
		return stripPts;
	}
	else
	{
		if (distLeftMid > distRightMid)
			return rightPts;
		return leftPts;
	}
}	

/*
	Finds the closest points in the given strip of points. We need to sort this according to the Y
	since sorting to the X for this lines them up. Essentially going in a direction where we can differentiate
	the points. Then we just need to check point distances until we have gone through all the points that are in the
	strip which could be at worst every point. So this will be an N operation where N is the number of points total.
*/
pair<Point, Point> DivideAndConquer::closest_points_strip(Point* strip, int numPoints, float currMinDist)
{
	float stripMinDist = currMinDist;
	unsigned int len = _idx_stack.size();
	qsort(strip, numPoints, sizeof(Point), compare_y);
	pair<Point, Point> stripMinPts;
	for (int i = 0; i < numPoints; ++i)
	{
		for (int j = i + 1; j < numPoints && (strip[j].y - strip[i].y) < stripMinDist; ++j)
		{
			_num_calculations++;
			if (strip[i].distance(&strip[j]) < stripMinDist)
			{
				stripMinDist = strip[i].distance(&strip[j]);
				stripMinPts = make_pair(strip[i], strip[j]);
				
				// We found a new small point so add it to our stack and get rid of the old one
			    /*if(_idx_stack.size() > len)
					_idx_stack.pop();
				_idx_stack.push(make_pair(strip[i].idx, strip[j].idx));*/
			}
		}
	}
	
	delete[] strip;
	return stripMinPts;
}
