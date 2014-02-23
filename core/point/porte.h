#ifndef PORTE_H
#define PORTE_H

#include"namedaccessiblepoint.h"

class Porte : public NamedAccessiblePoint
{
public:
    Porte(QString id, double x, double y, QString name);
    void setEstAccessiblePourLesHandicapes(bool accessible);
    bool getEstAccessiblePourLesHandicapes();
    TypePoint getTypePoint();
private:
    bool _estAccessiblePourLesHandicapes;
};

#endif // PORTE_H
