#include <stdlib.h>
#include <time.h>
#include "sieve.h"
#include "bbox.h"
#include "util.h"

double intersectionSurface(Circle c1, Circle c2)
{
    BoundingBox bBox = computeBoundingBox(c1, c2);
    const int randN = 100000;
    int nPoints = rand() % randN; //Get the number of points
    int nInCircles = 0;           //Number of points that are in both circles
    Point p;

    srand(time(0));
    for (int i = 0; i < nPoints; i++)
    {
        p.x = generateRand(bBox.min.x, bBox.max.x);
        p.y = generateRand(bBox.min.y, bBox.max.y);
        if (isInCircle(p, c1) && isInCircle(p, c2))
            nInCircles++;
    }

    return (double)nInCircles / nPoints;
}