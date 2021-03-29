#ifndef _BBOX_H_
#define _BBOX_H_

#include "point.h"
#include "circle.h"

/* Bounding Box structure */
typedef struct
{
    Point min;
    Point max;
} BoundingBox;

/* Compute and return a bounding box for two circles */
BoundingBox computeBoundingBox(Circle c1, Circle c2);

#endif