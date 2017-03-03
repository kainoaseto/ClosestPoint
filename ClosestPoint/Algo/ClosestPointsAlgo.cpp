//
// Created by Kainoa Seto on 3/1/17.
//

#include "ClosestPointsAlgo.h"

ClosestPointsAlgo::ClosestPointsAlgo(int numPoints, Point* points)
{
	_num_points = numPoints;

	// If we have points already then just pass the pointer and continue on
	if (NULL != points)
	{
		_points = points;
		return;
	}
	
	generate_random_points(numPoints);
}

void ClosestPointsAlgo::PrintResults()
{
	Point firstPoint = _shortest_points.first;
	Point secondPoint = _shortest_points.second;
	cout << _name << endl;
	cout << "The smallest distance is " << _shortest_distance
		<< " --> " << "P" << firstPoint.idx
		<< "[" << firstPoint.x << "," << firstPoint.y << "]" << " : "
		<< "P" << secondPoint.idx
		<< "[" << secondPoint.x << "," << secondPoint.y << "]" << endl;

	cout << " -->\t" << _num_calculations << " point-to-point distance calculations" << endl;
}

void ClosestPointsAlgo::generate_random_points(int numPoints)
{
	int range = numPoints * 10;
	int seed = clock();
	srand(seed);

	_points = new Point[numPoints];
	
	int i = 0, j;
	while (i < numPoints)
	{
		Point newPoint(rand() % range, rand() % range);

		/* This loop will count up and check to make sure we don't have the
		   point we are about to add to the list
		*/
		for (j = 0; j < i; ++j)
		{
			if (_points[j].x == newPoint.x && _points[j].y == newPoint.y)
				break;
		}

		// If we checked all of our points and no dupe was found then add the point
		if (j >= i)
		{
			_points[i] = newPoint;
			i++;
		}
	}
}

