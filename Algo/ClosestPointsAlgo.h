//
// Created by Kainoa Seto on 3/1/17.
//

#ifndef __CLOSESTPOINTSALGO_H__
#define __CLOSESTPOINTSALGO_H__

#include "../pch.h"

struct Point
{
    int x;
    int y;

    int distance(Point* point)
    {
        return static_cast<int>(sqrt(
                pow(fabs(point->x - this->x), 2)
                +
                pow(fabs(point->y - this->y), 2)
        ));
    };
};

class ClosestPointsAlgo
{

public:
    virtual void PrintResults();

    // Pure Virtual that needs to be implemented by the algorithm
    virtual void CalculateClosestPoints() = 0;

private:
    int results;


};

#endif // __CLOSESTPOINTSALGO_H__
