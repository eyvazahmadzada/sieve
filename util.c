#include <stdlib.h>
#include "util.h"

double min(double d1, double d2)
{
    return d1 <= d2 ? d1 : d2;
}

double max(double d1, double d2)
{
    return d1 >= d2 ? d1 : d2;
}

double generateRand(double min, double max)
{
    double range = (max - min);
    double div = RAND_MAX / range;
    return min + (rand() / div);
}