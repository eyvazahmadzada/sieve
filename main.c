#include <stdio.h>
#include "sieve.h"

int main()
{
    Circle c1, c2;
    printf("Points and radius of circle 1 (Format: (x y R)): \n");
    scanf("%lf %lf %lf", &c1.o.x, &c1.o.y, &c1.radius);

    printf("Points and radius of circle 2 (Format: (x y R)): \n");
    scanf("%lf %lf %lf", &c2.o.x, &c2.o.y, &c2.radius);

    printf("Intersection surface: %lf\n", intersectionSurface(c1, c2));
    // BoundingBox box = computeBoundingBox(c1, c2);
    // printf("%lf %lf\n", box.min.x, box.max.x);
    // printf("%lf %lf\n", box.min.y, box.max.y);

    return 0;
}