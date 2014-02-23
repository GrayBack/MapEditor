#ifndef ECRITUREDOM_H
#define ECRITUREDOM_H

#include <QObject>
#include <QDomDocument>
#include <QFile>
#include <QTextStream>
#include"projet.h"

class EcritureDom : public QObject
{
    Q_OBJECT
public:
    EcritureDom(Projet* proj);
    void ecrireSalles(std::set<Salle*> salles, QDomElement points);
    void ecrireAscenseurs(std::set<Ascenseur*> ascenseurs, QDomElement points);
    void ecrireCouloirs(std::set<Couloir*> couloirs, QDomElement points);
    void ecrireEscaliers(std::set<Escalier*> escaliers, QDomElement points);
    void ecrirePortes(std::set<Porte*> portes, QDomElement points);
    void ecrireQRCodes(std::set<QRCode*> qrcodes, QDomElement qrcodesElem);
    void ecrireToilettes(std::set<Toilette*> toilettes, QDomElement points);
    void ecrireEntreeSorties(std::set<EntreeSortie*> entreeSorties, QDomElement points);
    void ecrireLiens(std::set<Lien*> liens, QDomElement liensElem);


    ~EcritureDom();
private :
    QDomDocument doc;
    QDomElement projet;
    QFile file;
    QTextStream out;
};

#endif // ECRITUREDOM_H
