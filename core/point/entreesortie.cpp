#include "entreesortie.h"

EntreeSortie::EntreeSortie(QString id, double x, double y, QString name) :NamedPoint(id,x,y,name)
{
}

TypePoint EntreeSortie::getTypePoint(){
    return ENTREESORTIE;
}
