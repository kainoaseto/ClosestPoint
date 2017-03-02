#include "pch.h"
#include "Algo\BruteForce.h"

int main()
{
	Point* points;

	BruteForce cpBruteForce(100);
	// Cache our points so they are the same for both runs
	points = cpBruteForce.GetPoints();
	cpBruteForce.CalculateClosestPoints();
	cpBruteForce.PrintResults();

    return 0;
}