#ifndef ESCALIER_H
#define ESCALIER_H

#include"namedaccessiblepoint.h"

class Escalier : public NamedAccessiblePoint
{
public:
    Escalier(QString id, double x, double y, QString name);
    TypePoint getTypePoint();
    bool getEstAccessiblePourLesHandicapes();
    ~Escalier();
};

#endif // ESCALIER_H
