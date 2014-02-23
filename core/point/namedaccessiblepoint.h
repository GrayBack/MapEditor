#ifndef NAMEDACCESSIBLEPOINT_H
#define NAMEDACCESSIBLEPOINT_H

#include"namedpoint.h"

class NamedAccessiblePoint : public NamedPoint
{
public:
    NamedAccessiblePoint(QString id, double x, double y, QString name);
    virtual bool getEstAccessiblePourLesHandicapes()=0;
    bool operator ==(const NamedAccessiblePoint& nap);
};

#endif // NAMEDACCESSIBLEPOINT_H
