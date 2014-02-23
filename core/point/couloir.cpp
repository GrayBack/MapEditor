#include "couloir.h"

Couloir::Couloir(QString id, double x, double y, QString name):NamedAccessiblePoint(id, x, y, name)
{
    _estAccessiblePourLesHandicapes=true;
}


void Couloir::setEstAccessiblePourLesHandicapes(bool accessible){
    _estAccessiblePourLesHandicapes=accessible;
}

bool Couloir::getEstAccessiblePourLesHandicapes(){
    return _estAccessiblePourLesHandicapes;
}

TypePoint Couloir::getTypePoint(){
    return COULOIR;
}

