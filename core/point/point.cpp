#include "point.h"

Point::Point(QString id, double x, double y){
    _id=id;
    _x=x;
    _y=y;
}

void Point::setX(double x){
    _x=x;
}

void Point::setY(double y){
    _y=y;
}

double Point::getX()const{
    return _x;
}

double Point::getY()const{
    return _y;
}

QString Point::getId()const{
    return _id;
}

bool Point::operator ==(const Point& p){
    return p.getX()==_x && p.getY()==_y && p.getId()==_id;

}

