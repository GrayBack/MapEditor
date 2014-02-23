#ifndef POINT_H
#define POINT_H

#include <QString>
#include"type_point.h"

class Point
{
public:
    Point(QString id, double x, double y);
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    QString getId() const;
    bool operator ==(const Point& p);

protected:
    double _x;
    double _y;
    QString _id;
};

#endif // POINT_H
