//
// Created by Kainoa Seto on 3/1/17.
//

#include "BruteForce.h"

BruteForce::BruteForce(int numPoints, Point* points)
	: ClosestPointsAlgo(numPoints, points)
{
	SetName("BruteForce");
	_num_points = numPoints;
	_points = GetPoints();
}

void BruteForce::CalculateClosestPoints()
{
	float shortestDist = FLT_MAX;
	pair<int, int> shortestIdxs;
	int numCalcs = 0;

	for (int i = 0; i < _num_points; i++)
	{
		for (int j = i + 1; j < _num_points; ++j)
		{
			if (_points[i].distance(&_points[j]) < shortestDist)
			{
				shortestDist = _points[i].distance(&_points[j]);
				shortestIdxs = make_pair(i, j);
			}
			numCalcs++;
		}
	}

	SetNumCalculations(numCalcs);
	SetShortestPointIdxs(shortestIdxs);
	SetShortestDistance(shortestDist);
}
