#ifndef BATIMENT_H
#define BATIMENT_H

#include<vector>
#include"etage.h"

class Batiment
{
    std::vector<Etage*> _etages;
    QString _name;
    QString _id;

public:
    Batiment(QString id, QString name);
    std::vector<Etage*> getEtages();
    void ajouterEtage(Etage* etage);
    void setName(QString name);
    void setId(QString id);

    QString getName();
    QString getId();
};

#endif // BATIMENT_H
