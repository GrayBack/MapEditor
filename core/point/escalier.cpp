#include "escalier.h"

Escalier::Escalier(QString id, double x, double y, QString name):NamedAccessiblePoint(id,x,y,name)
{
}

TypePoint Escalier::getTypePoint(){
    return ESCALIER;
}

bool Escalier::getEstAccessiblePourLesHandicapes(){
    return false;
}


