#include "salle.h"

Salle::Salle(QString id, double x, double y, QString name):NamedAccessiblePoint(id, x, y, name)
{
    _estAccessiblePourLesHandicapes=true;
}


void Salle::setEstAccessiblePourLesHandicapes(bool accessible){
    _estAccessiblePourLesHandicapes=accessible;
}

bool Salle::getEstAccessiblePourLesHandicapes(){
    return _estAccessiblePourLesHandicapes;
}

TypePoint Salle::getTypePoint(){
    return SALLE;
}

Salle::~Salle(){

}
