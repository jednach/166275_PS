#include <stdio.h>
#include <math.h>
#include "point.h"
#include "Triangle.h"
Triangle makeTriangle(int ax,int ay,int bx,int by,int cx,int cy)
{
    Triangle tmp;
    tmp.a.x = ax;
    tmp.a.y = ay;
    tmp.b.x = bx;
    tmp.b.y = by;
    tmp.c.x = cx;
    tmp.c.y = cy;
        return tmp;
}
Triangle makeTrianglefromPoints(const Point *a,const Point *b,const Point *c)
{
    Triangle tmp;
    tmp.a.x = a->x;
    tmp.a.y = a->y;
    tmp.b.x = b->x;
    tmp.b.y = b->y;
    tmp.c.x = c->x;
    tmp.c.y = c->y;
        return tmp;
}
void showtri(const Triangle *s)
{
    printf("wspolrzedne punktu A: (%d,%d)\n", s->a.x, s->a.y);
    printf("wspolrzedne punktu B: (%d,%d)\n", s->b.x, s->b.y);
    printf("wspolrzedne punktu C: (%d,%d)\n", s->c.x, s->c.y);
}
double area(const Triangle *s)
{
    double res;
    res=(double)1/2*fabs((s->b.x - s->a.x)*(s->c.y - s->a.y) - (s->b.y - s->a.y)*(s->c.x - s->a.x));
    return res;
}
void movetriby(Triangle *s,int deltaX,int deltaY)
{
    s->a.x+=deltaX;
    s->a.y+=deltaY;
    s->b.x+=deltaX;
    s->b.y+=deltaY;
    s->c.x+=deltaX;
    s->c.y+=deltaY;
}
