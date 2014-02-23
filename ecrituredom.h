#ifndef ECRITUREDOM_H
#define ECRITUREDOM_H

#include <QObject>
#include <QDomDocument>
#include <QFile>
#include <QTextStream>
#include"etage.h"
class EcritureDom : public QObject
{
    Q_OBJECT
public:
    EcritureDom(Etage* etage);
    void ecrireSalles(std::set<Salle*> salles, QDomElement etage);
    void ecrireAscenseurs(std::set<Ascenseur*> ascenseurs, QDomElement etage);
    void ecrireCouloirs(std::set<Couloir*> couloirs, QDomElement etage);
    void ecrireEscaliers(std::set<Escalier*> escaliers, QDomElement etage);
    void ecrirePortes(std::set<Porte*> portes, QDomElement etage);
    void ecrireQRCodes(std::set<QRCode*> qrcodes, QDomElement etage);
    void ecrireToilettes(std::set<Toilette*> toilettes, QDomElement etage);
    //void ecrireQRCodes(std::set<Ascenseur*> ascenseur, QDomElement etage);


    ~EcritureDom();
private :
    QDomDocument doc;
    QDomElement projet;
    QFile file;
    QTextStream out;
    Etage* _etage;
};

#endif // ECRITUREDOM_H
