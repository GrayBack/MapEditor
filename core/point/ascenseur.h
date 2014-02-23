#ifndef ASCENSEUR_H
#define ASCENSEUR_H

#include"type_point.h"
#include"namedaccessiblepoint.h"
#include"type_acces.h"

class Ascenseur : public NamedAccessiblePoint
{
public:
    Ascenseur(QString id, double x, double y,QString name, TypeAcces acces);
    Ascenseur(QString id, double x, double y,QString name);
    bool getEstAccessiblePourLesHandicapes();
    TypePoint getTypePoint();
    TypeAcces getTypeAcces();
    void setTypeAcces(TypeAcces acces);
private:
    TypeAcces _typeAcces;
};

#endif // ASCENSEUR_H
