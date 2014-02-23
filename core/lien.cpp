#include "lien.h"

Lien::Lien(Point* point1, Point* point2)
{
    _point1=point1;
    _point2=point2;
}

Point* Lien::getPoint1()const{
    return _point1;
}

Point* Lien::getPoint2()const{
    return _point2;
}

bool Lien::operator== (const Lien& l){
    return (
                (*(l._point1)==*(_point1)  && *(l._point2)==*(_point2))||
                (*(l._point1)==*(_point2)  && *(l._point2)==*(_point1))
           );
}

