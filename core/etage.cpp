#include "etage.h"



Etage::Etage(QString name, QString imagePath)
{
    _name=name;
    _imagePath=imagePath;
    _id="00";
    _niveau=0.0;
}

void Etage::ajouterAscenseur(Ascenseur* a){
    _ascenseurs.insert(a);
}

void Etage::ajouterCouloir(Couloir* c){
    _couloir.insert(c);
}

void Etage::ajouterEscalier(Escalier* e){
    _escaliers.insert(e);
}

void Etage::ajouterPorte(Porte* p){
    _portes.insert(p);
}

void Etage::ajouterQRCode(QRCode* q){
    _qrcodes.insert(q);
}

void Etage::ajouterSalle(Salle* s){
    _salles.insert(s);
}

void Etage::ajouterToilette(Toilette* t){
    _toilettes.insert(t);
}


void Etage::ajouterLien(Lien* lien){
    _liens.insert(lien);
}

void Etage::ajouterEntreeSortie(EntreeSortie* es){
    _entreesorties.insert(es);
}

void Etage::setDebutEchelle(Point* p){
    _debutEchelle=p;
}

void Etage::setFinEchelle(Point* p){
    _finEchelle=p;
}


std::set<Ascenseur*> Etage::getAscenseurs(){
    return _ascenseurs;
}

std::set<Couloir*>Etage::getCouloirs(){
    return _couloir;
}

std::set<Escalier*>Etage::getEscaliers(){
    return _escaliers;
}

std::set<Porte*> Etage::getPortes(){
    return _portes;
}

std::set<QRCode*> Etage::getQRCodes(){
    return _qrcodes;
}

std::set<Salle*> Etage::getSalles(){
    return _salles;
}

std::set<Toilette*> Etage::getToilettes(){
    return _toilettes;
}

std::set<EntreeSortie*> Etage::getEntreeSortie(){
    return _entreesorties;
}

QString Etage::getName(){
    return _name;
}


void Etage::setName(QString name){
    _name=name;
}

QString Etage::getId(){
    return _id;
}

double Etage::getNiveau(){
    return _niveau;
}

void Etage::setNiveau(double niveau){
    _niveau =niveau;
}

Point* Etage::getDebutEchelle(){
    return _debutEchelle;
}

Point* Etage::getFinEchelle(){
    return _finEchelle;
}

std::set<Lien*> Etage::getLiens(){
    return _liens;
}


void Etage::setDistanceEntrePointsDeLEchelle(double distance){
    _distanceEntrePointsDeLEchelle=distance;
}

double Etage::getDistanceEntrePointsDeLEchelle (){
    return _distanceEntrePointsDeLEchelle;
}



/**
 * @brief The destructor
 */
Etage::~Etage(){
}
