#ifndef LIEN_H
#define LIEN_H

#include "point.h"
class Lien
{
    Point* _point1;
    Point* _point2;
public:
    Lien(Point* point1, Point* point2);
    bool operator == (const Lien& l);
    Point* getPoint1()const;
    Point* getPoint2()const;
};

#endif // LIEN_H
