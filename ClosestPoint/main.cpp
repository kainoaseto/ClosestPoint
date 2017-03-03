#include "pch.h"
#include "Algo\BruteForce.h"
#include "Algo\DivideAndConquer.h"

void Analysis(Point* points, int numPoints);

int main()
{
	Point* points;
	Point points_set_one[6] = { 
		Point(2, 3), 
		Point(12, 30), 
		Point(40, 50), 
		Point(5, 1), 
		Point(12, 10), 
		Point(3, 4) 
	};

	Point points_set_two[6] = {
		Point(1, 1),
		Point(2, 5),
		Point(15, 1),
		Point(16, 1),
		Point(36, 4),
		Point(39, 1)
	};

	Point points_set_three[6] = {
		Point(1, 1),
		Point(2, 5),
		Point(15, 1),
		Point(23, 1),
		Point(36, 4),
		Point(39, 1)
	};

	Point points_set_four[6] = {
		Point(1, 1),
		Point(2, 24),
		Point(15, 1),
		Point(23, 1),
		Point(36, 4),
		Point(39, 1)
	};

	cout << "#########################Closest Points Analysis#########################" << endl;
	
	/*Analysis(points_set_one, 6);
	Analysis(points_set_two, 6);
	Analysis(points_set_three, 6);
	Analysis(points_set_four, 6);*/
	Analysis(NULL, 100);
	//Analysis(NULL, 1000);
		
    return 0;
}

void Analysis(Point* points, int numPoints)
{
	BruteForce cpBruteForce(numPoints, points);
	
	if(points == NULL)
		points = cpBruteForce.GetPoints();

	points->PrintPoints(points, numPoints);

	cpBruteForce.CalculateClosestPoints();
	cpBruteForce.PrintResults();

	DivideAndConquer cpDac(numPoints, points);
	cpDac.CalculateClosestPoints();
	cpDac.PrintResults();
}