#include "ascenseur.h"

Ascenseur::Ascenseur(QString id, double x, double y,QString name, TypeAcces acces):NamedAccessiblePoint(id,x,y,name)
{
    _typeAcces=acces;
}

Ascenseur::Ascenseur(QString id, double x, double y,QString name):NamedAccessiblePoint(id,x,y,name)
{
    _typeAcces=UNIVERSEL;
}

bool Ascenseur::getEstAccessiblePourLesHandicapes(){
    return _typeAcces!=VALIDE;
}

TypePoint Ascenseur::getTypePoint(){
    return ASCENSEUR;
}
