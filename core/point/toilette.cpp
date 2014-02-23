#include "toilette.h"

Toilette::Toilette(QString id, double x, double y,QString name, bool estAccessiblePourLesHandicapes, Genre genre):NamedAccessiblePoint(id,x,y,name)
{
    _genre=genre;
    _estAccessiblePourLesHandicapes=estAccessiblePourLesHandicapes;
}

Toilette::Toilette(QString id, double x, double y,QString name) : NamedAccessiblePoint(id,x,y,name)
{
    _genre = MIXTE;
    _estAccessiblePourLesHandicapes = false;
}

bool Toilette::getEstAccessiblePourLesHandicapes(){
    return _estAccessiblePourLesHandicapes;
}

TypePoint Toilette::getTypePoint(){
    return TOILETTE;
}
