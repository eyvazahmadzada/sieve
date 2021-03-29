#ifndef _POINT_H_
#define _POINT_H_

/* Point structure */
typedef struct
{
    double x;
    double y;
} Point;

/* Compute and return the distance between two points */
double distance(Point p1, Point p2);

#endif