//
// Created by Kainoa Seto on 3/1/17.
//

#ifndef __BRUTEFORCE_H__
#define __BRUTEFORCE_H__

#include "ClosestPointsAlgo.h"

class BruteForce : public ClosestPointsAlgo
{
	friend ClosestPointsAlgo;

public:
	BruteForce(int numPoints, Point* points = NULL);
	~BruteForce() {};

	void CalculateClosestPoints();

private:
	int _num_points;
	Point* _points;
};

#endif // __BRUTEFORCE_H__
