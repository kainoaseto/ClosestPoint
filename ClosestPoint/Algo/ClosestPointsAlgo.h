//
// Created by Kainoa Seto on 3/1/17.
//

#ifndef __CLOSESTPOINTSALGO_H__
#define __CLOSESTPOINTSALGO_H__

#include "../pch.h"

// Point Struct with helper function
struct Point
{
	int x, y;

	Point(int x = 0, int y = 0)
	{
		this->x = x, this->y = y;
	};

    float distance(Point* point)
    {
        return sqrt(
                static_cast<float>(pow(point->x - this->x, 2))
                +
                static_cast<float>(pow(point->y - this->y, 2))
        );
    };
};



/* 
	ClosestPoints Algorithm Interface to reduce the code for printing and other
	features that are needed in both Algorithms
*/
class ClosestPointsAlgo
{

public:
	ClosestPointsAlgo(int numPoints, Point* points = NULL);
	virtual ~ClosestPointsAlgo() { delete[] _points; };

	// Prints the results from the private vars below that need to be set
    void PrintResults();

    // Pure Virtual that needs to be implemented by the algorithm
    virtual void CalculateClosestPoints() = 0;

	// Setters and Getters
	void SetNumCalculations(int numCalculations)		{ _num_calculations = numCalculations; }
	int GetNumCalculations()							{ return _num_calculations; }

	Point* GetPoints()									{ return _points; }
	int GetNumPoints()									{ return _num_points; }

	void SetShortestDistance(float shorestDistance)		{ _shortest_distance = shorestDistance; }
	float GetShortestDistance()							{ return _shortest_distance; }

	void SetShortestPointIdxs(pair<int, int> pointIdxs) { _shortest_distance_point_idxs = pointIdxs; }
	pair<int, int> GetShortestPointIdxs()				{ return _shortest_distance_point_idxs; }

	void SetName(string name)							{ _name = name; }
	string GetName()									{ return _name; }

private:
	void generate_random_points(int numPoints);

	int _num_calculations;
	int _num_points;
	float _shortest_distance;

	pair<int, int> _shortest_distance_point_idxs;

	string _name;
	Point* _points;

};

#endif // __CLOSESTPOINTSALGO_H__
