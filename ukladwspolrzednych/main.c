#include <stdio.h>
#include <stdlib.h>
#include "LineSegment.h"
#include "point.h"
#include "Triangle.h"

int main()
{
    LineSegment odc1 = makeLineSegment(0,-1,3,0);
    show(&odc1);
    Point a = makePoint(0,1);
    Point b = makePoint(3,2);
    LineSegment odc2 = makeLineSegmentfromPoints(&a,&b);
    LineSegment odc3 = makeLineSegment(0,7,3,8);
    Point c = makePoint(0,-3);
    Point d = makePoint(3,-12);
    LineSegment odc4 = makeLineSegmentfromPoints(&c,&d);
    show(&odc2);
    printf("%lf\n",length(&odc2));
    if(parallel(&odc1,&odc3))
        printf("proste sa rownolegle\n");
    else
        printf("proste nie sa rownolegle\n");
    if(perpendicular(&odc2,&odc4))
        printf("proste sa prostopadle\n");
    else
        printf("proste nie sa prostopadle\n");
    moveby(&odc2,4,5);
    show(&odc2);
    Point tria = makePoint(0,0);
    Point trib = makePoint(3,0);
    Point tric = makePoint(0,2);
    Triangle tri1 = makeTrianglefromPoints(&tria,&trib,&tric);
    showtri(&tri1);
    printf("Pole tego trojkata to: %lf\n", area(&tri1));
    movetriby(&tri1,2,0);
    showtri(&tri1);
    return 0;
}
