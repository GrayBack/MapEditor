#include "etage.h"



Etage::Etage(QString name, QString imagePath)
{
    _name=name;
    _imagePath=imagePath;
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

//void supprimer lien
//void supprimer point -> supprimer liens correspondants
//setUniteEchelle
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



/**
 * @brief The destructor
 */
Etage::~Etage(){
    ;//tout détruire
}
