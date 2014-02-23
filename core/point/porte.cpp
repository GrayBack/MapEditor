#include "porte.h"

Porte::Porte(QString id, double x, double y, QString name):NamedAccessiblePoint(id, x, y, name)
{
    _estAccessiblePourLesHandicapes=true;
}


void Porte::setEstAccessiblePourLesHandicapes(bool accessible){
    _estAccessiblePourLesHandicapes=accessible;
}

bool Porte::getEstAccessiblePourLesHandicapes(){
    return _estAccessiblePourLesHandicapes;
}

TypePoint Porte::getTypePoint(){
    return PORTE;
}
