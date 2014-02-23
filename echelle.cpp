#include "echelle.h"

Echelle::Echelle()
{
}

void Echelle::setX(double x){
    _x = x;
}

void Echelle::setY(double y){
    _y = y;
}

void Echelle::setValue(int value){
    _value = value;
}

double Echelle::getX(){
    return _x;
}

double Echelle::getY(){
    return _y;
}

int Echelle::getValue(){
    return _value;
}
