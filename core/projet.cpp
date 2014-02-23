#include "projet.h"

Projet::Projet(QString name){
    _name=name;
}

QString Projet::getNextId(){
    QString res= QString::number(_lastID);
    _lastID++;
    return res;
}

std::vector<Batiment*> Projet::getBatiments(){
    return _batiments;
}

void Projet::ajouterBatiment(Batiment* batiment){
    _batiments.push_back(batiment);
}

QString Projet::getName(){
    return _name;
}

void Projet::setName(QString name){
    _name=name;
}

Projet::~Projet(){

}
