#ifndef NAMEDPOINT_H
#define NAMEDPOINT_H

#include"type_point.h"
#include"point.h"

class NamedPoint : public Point
{
public:
    NamedPoint(QString id, double x, double y, QString name);
    QString getName()const;
    void setName(QString name);
    virtual TypePoint getTypePoint()=0;
    bool operator ==(const NamedPoint& np);

protected :
    QString _name;
};

#endif // NAMEDPOINT_H
