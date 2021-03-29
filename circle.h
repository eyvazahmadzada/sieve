#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "point.h"

/* Circle structure */
typedef struct
{
    Point o;
    double radius;
} Circle;

/* Check whether a point is in circle */
int isInCircle(Point p, Circle c);

#endif