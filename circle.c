#include "circle.h"
#include "point.h"

int isInCircle(Point p, Circle c)
{
    return distance(p, c.o) < c.radius * c.radius;
}