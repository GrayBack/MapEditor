#ifndef ETAGE_H
#define ETAGE_H
#include <set>
#include <QString>

#include "point.h"
#include "lien.h"
#include "ascenseur.h"
#include "couloir.h"
#include "escalier.h"
#include "porte.h"
#include "qrcode.h"
#include "salle.h"
#include "toilette.h"
#include "entreesortie.h"


class Etage
{
    std::set<Ascenseur*> _ascenseurs;
    std::set<Couloir*> _couloir;
    std::set<Escalier*> _escaliers;
    std::set<Porte*> _portes;
    std::set<QRCode*> _qrcodes;
    std::set<Salle*> _salles;
    std::set<Toilette*> _toilettes;
    std::set<EntreeSortie*> _entreesorties;
    std::set<Lien*> _liens;
    QString _name;
    QString _id;
    double _niveau;
    QString _imagePath;
    Point* _debutEchelle;
    Point* _finEchelle;
    double _distanceEntrePointsDeLEchelle;//en metres


public:
    /**
     * @brief The constructor
     * @param
     * @param
     */
    Etage(QString name, QString imagePath);

    void ajouterAscenseur(Ascenseur* a);
    void ajouterCouloir(Couloir* c);
    void ajouterEscalier(Escalier* e);
    void ajouterPorte(Porte* p);
    void ajouterQRCode(QRCode* q);
    void ajouterSalle(Salle* s);
    void ajouterToilette(Toilette* t);
    void ajouterEntreeSortie(EntreeSortie * e);


    void ajouterLien(Lien* lien);
    //void supprimer lien
    //void supprimer point -> supprimer liens correspondants
    //setUniteEchelle
    void setDebutEchelle(Point* p);
    Point* getDebutEchelle();
    void setFinEchelle(Point* p);
    Point* getFinEchelle();

    std::set<Ascenseur*> getAscenseurs();
    std::set<Couloir*>getCouloirs();
    std::set<Escalier*>getEscaliers();
    std::set<Porte*> getPortes();
    std::set<QRCode*> getQRCodes();
    std::set<Salle*> getSalles();
    std::set<Toilette*> getToilettes();
    std::set<EntreeSortie*> getEntreeSortie();
    std::set<Lien*> getLiens();

    QString getName();
    void setName(QString name);
    QString getId();
    double getNiveau();
    void setNiveau(double niveau);

    /**
     * @brief The destructor
     */
    ~Etage();
};

#endif // ETAGE_H
