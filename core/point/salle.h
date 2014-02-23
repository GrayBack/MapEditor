#ifndef SALLE_H
#define SALLE_H

#include"namedaccessiblepoint.h"

class Salle : public NamedAccessiblePoint
{
public:
    Salle(QString id, double x, double y, QString name);
    void setEstAccessiblePourLesHandicapes(bool accessible);
    bool getEstAccessiblePourLesHandicapes();
    TypePoint getTypePoint();
    ~Salle();

private:
    bool _estAccessiblePourLesHandicapes;

};

#endif // SALLE_H
