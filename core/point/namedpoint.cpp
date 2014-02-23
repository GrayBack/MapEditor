#include "namedpoint.h"

NamedPoint::NamedPoint(QString id, double x, double y, QString name):Point(id,x,y)
{
    _name=name;
}

QString NamedPoint::getName()const{
    return _name;
}

void NamedPoint::setName(QString name){
    _name=name;
}

bool NamedPoint::operator ==(const NamedPoint& np){
    return np._id==_id
            && np._name==_name
            && np._x==_x
            && np._y==_y;
}
