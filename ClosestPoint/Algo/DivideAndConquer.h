//
// Created by Kainoa Seto on 3/1/17.
//

#ifndef __DIVIDEANDCONQUER_H__
#define __DIVIDEANDCONQUER_H__

#include "ClosestPointsAlgo.h"

class DivideAndConquer : public ClosestPointsAlgo
{
	friend ClosestPointsAlgo;
public:
	DivideAndConquer(int numPoints, Point* points = NULL);
	~DivideAndConquer() {};

	void CalculateClosestPoints();

	void PrintResults();

private:
	float closest_points_recursive(Point* points, int numPoints);
	float closest_points_strip(Point* strip, int numPoints, float currMinDist);

	pair<Point, Point> _shortest_points;
	float _shortest_distance;
	int _num_calculations;
	int _num_points;
	Point* _points;
};

#endif // __DIVIDEANDCONQUER_H__
