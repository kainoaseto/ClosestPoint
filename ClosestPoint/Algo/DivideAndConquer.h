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
	pair<Point, Point> closest_points_recursive(Point* points, int numPoints);
	pair<Point, Point> closest_points_strip(Point* strip, int numPoints, float currMinDist);
	
	pair<int, int> _shortest_idxs;
	pair<int, int> _strip_idxs;
	pair<Point, Point> _shortest;
	stack<pair<int, int>> _idx_stack;
	int _num_calculations;
	int _num_points;
	Point* _points;
};

#endif // __DIVIDEANDCONQUER_H__
