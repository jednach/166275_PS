#ifndef LINESEGMENT_H
#define LINESEGMENT_H

#include "point.h"

typedef struct LineSegment {
    Point a;
    Point b;
} LineSegment;

LineSegment makeLineSegment(int ax, int ay, int bx, int by);
void show(const LineSegment *s);
LineSegment makeLineSegmentfromPoints(const Point *a,const Point *b);
double length(const LineSegment *s);
int parallel(const LineSegment *s1,const LineSegment *s2);
int perpendicular(const LineSegment *s1,const LineSegment *s2);
void moveby(LineSegment *s,int deltaX,int deltaY);
#endif
