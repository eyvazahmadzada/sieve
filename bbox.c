#include "bbox.h"
#include "util.h"

BoundingBox computeBoundingBox(Circle c1, Circle c2)
{
    BoundingBox bBox;
    bBox.min.x = min(c1.o.x - c1.radius, c2.o.x - c2.radius);
    bBox.max.x = max(c1.o.x + c1.radius, c2.o.x + c2.radius);
    bBox.min.y = min(c1.o.y - c1.radius, c2.o.y - c2.radius);
    bBox.max.y = max(c1.o.y + c1.radius, c2.o.y + c2.radius);

    return bBox;
}