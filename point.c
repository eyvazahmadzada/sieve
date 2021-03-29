#include "point.h"

double distance(Point p1, Point p2)
{
    double dis_x = (p2.x - p1.x);
    double dis_y = (p2.y - p1.y);
    return dis_x * dis_x + dis_y * dis_y;
}