#ifndef PROJET_H
#define PROJET_H

#include"batiment.h"

class Projet
{
    int _lastID;
    QString _name;
    std::vector<Batiment*> _batiments;
public:
    Projet(QString name);
    QString getNextId();
    std::vector<Batiment*> getBatiments();
    void ajouterBatiment(Batiment* batiment);
    QString getName();
    void setName(QString name);
    ~Projet();
};

#endif // PROJET_H
