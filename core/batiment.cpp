#include "batiment.h"

Batiment::Batiment(QString id, QString name){
    _id=id;
    _name=name;
}

std::vector<Etage*> Batiment::getEtages(){
    return _etages;
}

void Batiment::ajouterEtage(Etage* etage){
    _etages.push_back(etage);
}

void Batiment::setName(QString name){
    _name=name;
}

QString Batiment::getName(){
    return _name;
}

QString Batiment::getId(){
    return _id;
}

void Batiment::setId(QString id){
    _id=id;
}
