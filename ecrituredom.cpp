#include "ecrituredom.h"
#include <QDomElement>

void EcritureDom::ecrireSalles(std::set<Salle*> salles, QDomElement points){

    for (std::set<Salle*>::iterator it=salles.begin(); it!=salles.end(); ++it){
        Salle* s = *it;
        QDomElement salle = doc.createElement("point");
        points.appendChild(salle);
        salle.setAttribute("id",s->getId());
        salle.setAttribute("x",s->getX());
        salle.setAttribute("y",s->getY());
        salle.setAttribute("type","salle");
        salle.setAttribute("isAccessible",s->getEstAccessiblePourLesHandicapes());

    }

}

void EcritureDom::ecrireAscenseurs(std::set<Ascenseur*> ascenseurs, QDomElement points){

    for (std::set<Ascenseur*>::iterator it=ascenseurs.begin(); it!=ascenseurs.end(); ++it){
        Ascenseur* a = *it;
        QDomElement ascenseur = doc.createElement("point");
        points.appendChild(ascenseur);
        ascenseur.setAttribute("id",a->getId());
        ascenseur.setAttribute("x",a->getX());
        ascenseur.setAttribute("y",a->getY());
        ascenseur.setAttribute("type","ascenseur");
        ascenseur.setAttribute("isAccessible",a->getEstAccessiblePourLesHandicapes());
        //type d'acces
    }

}

void EcritureDom::ecrireCouloirs(std::set<Couloir*> couloirs, QDomElement points){
    for (std::set<Couloir*>::iterator it=couloirs.begin(); it!=couloirs.end(); ++it){
        Couloir* c = *it;
        QDomElement couloir = doc.createElement("point");
        points.appendChild(couloir);
        couloir.setAttribute("id",c->getId());
        couloir.setAttribute("x",c->getX());
        couloir.setAttribute("y",c->getY());
        couloir.setAttribute("type","couloir");
        couloir.setAttribute("isAccessible",c->getEstAccessiblePourLesHandicapes());
    }
}

void EcritureDom::ecrireEscaliers(std::set<Escalier*> escaliers, QDomElement points){
    for (std::set<Escalier*>::iterator it=escaliers.begin(); it!=escaliers.end(); ++it){
            Escalier* escaliers = *it;
            QDomElement escalier = doc.createElement("point");
            points.appendChild(escalier);
            escalier.setAttribute("id",escaliers->getId());
            escalier.setAttribute("x",escaliers->getX());
            escalier.setAttribute("y",escaliers->getY());
            escalier.setAttribute("type","escalier");
            escalier.setAttribute("isAccessible",escaliers->getEstAccessiblePourLesHandicapes());
        }
}

void EcritureDom::ecrirePortes(std::set<Porte*> portes, QDomElement points){
    for (std::set<Porte*>::iterator it=portes.begin(); it!=portes.end(); ++it){
                Porte* portes = *it;
                QDomElement porte = doc.createElement("point");
                points.appendChild(porte);
                porte.setAttribute("id",portes->getId());
                porte.setAttribute("x",portes->getX());
                porte.setAttribute("y",portes->getY());
                porte.setAttribute("type","porte");
                porte.setAttribute("isAccessible",portes->getEstAccessiblePourLesHandicapes());
            }
}

void EcritureDom::ecrireQRCodes(std::set<QRCode*> qrcodes, QDomElement qrcodesElem){
    for (std::set<QRCode*>::iterator it=qrcodes.begin(); it!=qrcodes.end(); ++it){
                QRCode* qrc = *it;
                QDomElement qrcode = doc.createElement("point");
                qrcodesElem.appendChild(qrcode);
                qrcode.setAttribute("id",qrc->getId());
                qrcode.setAttribute("x",qrc->getX());
                qrcode.setAttribute("y",qrc->getY());
                qrcode.setAttribute("type","qrcode");
                qrcode.setAttribute("text",qrc->getText());
                qrcode.setAttribute("name",qrc->getName());
            }
}

void EcritureDom::ecrireToilettes(std::set<Toilette*> toilettes, QDomElement points){
    for (std::set<Toilette*>::iterator it=toilettes.begin(); it!=toilettes.end(); ++it){
                Toilette* t = *it;
                QDomElement toilette = doc.createElement("point");
                points.appendChild(toilette);
                toilette.setAttribute("id",t->getId());
                toilette.setAttribute("x",t->getX());
                toilette.setAttribute("y",t->getY());
                toilette.setAttribute("type","toilette");
                toilette.setAttribute("isAccessible",t->getEstAccessiblePourLesHandicapes());
                toilette.setAttribute("genre",t->getGenreQString());
            }
}

void EcritureDom::ecrireEntreeSorties(std::set<EntreeSortie*> entreeSorties, QDomElement points){
    for (std::set<EntreeSortie*>::iterator it=entreeSorties.begin(); it!=entreeSorties.end(); ++it){
                EntreeSortie* es = *it;
                QDomElement entreeSortie = doc.createElement("point");
                points.appendChild(entreeSortie);
                entreeSortie.setAttribute("id",es->getId());
                entreeSortie.setAttribute("x",es->getX());
                entreeSortie.setAttribute("y",es->getY());
                entreeSortie.setAttribute("type","E/S");
            }
}

void EcritureDom::ecrireLiens(std::set<Lien*> liens, QDomElement liensElem){
        for (std::set<Lien*>::iterator it=liens.begin(); it!=liens.end(); ++it){
                    Lien* l = *it;
                    QDomElement arc = doc.createElement("arc");
                    liensElem.appendChild(arc);
                    arc.setAttribute("from",l->getPoint1()->getId());
                    arc.setAttribute("to",l->getPoint2()->getId());
                    }
    }






EcritureDom::EcritureDom(Etage* etageT)
{
    _etage=etageT;


    QString nomProjet="ProjetIHM";
    projet = doc.createElement("projet"); // création de la balise "projet"
    projet.setAttribute("name", nomProjet);
    doc.appendChild(projet); // filiation de la balise "projet"
    file.setFileName(nomProjet.append(".xml"));
    if (!file.open(QIODevice::WriteOnly)) // ouverture du fichier de sauvegarde
    return; // en écriture
    out.setDevice(&file); // association du flux au fichier

    // cr��ation de la balise "batiment"
    QDomElement batiment = doc.createElement("batiment");
    projet.appendChild(batiment); // filiation de la balise "batiment"
    batiment.setAttribute("name","nBat"); // cr��ation de l'attribut "name"
    batiment.setAttribute("id","idBat");
    // cr��ation de la balise "etage"
    QDomElement etage = doc.createElement("etage");
    // filiation de la balise "etage", qui appartient �� un batiment
    etage.setAttribute("id",_etage->getId());
    etage.setAttribute("niveau", _etage->getNiveau());
    etage.setAttribute("name",_etage->getName());
    batiment.appendChild(etage);
    // cr��ation de la balise "echelle"
    QDomElement echelle = doc.createElement("echelle");
    etage.appendChild(echelle); // filiation de la balise "echelle"
    QDomElement pointDebut = doc.createElement("point");
    echelle.appendChild(pointDebut);
    pointDebut.setAttribute("x",_etage->getDebutEchelle()->getX());
    pointDebut.setAttribute("y",_etage->getDebutEchelle()->getY());
    // cr��ation de la balise "image"
    QDomElement image = doc.createElement("image");
    image.setAttribute("path", "pathImage");
    etage.appendChild(image); // filiation de la balise "echelle"






    // cr��ation de la balise "QrCode"
    QDomElement qrcodes = doc.createElement("qrcodes");
    etage.appendChild(qrcodes); // filiation de la balise "qrcode"
    this->ecrireQRCodes(_etage->getQRCodes(),qrcodes);
    // cr��ation de la balise "points"
    QDomElement points = doc.createElement("points");
    etage.appendChild(points); // filiation de la balise "points"

    this->ecrireAscenseurs(_etage->getAscenseurs(), points);
    this->ecrireSalles(_etage->getSalles(), points);
    this->ecrireCouloirs(_etage->getCouloirs(), points);
    this->ecrireEscaliers(_etage->getEscaliers(), points);
    this->ecrirePortes(_etage->getPortes(), points);
    this->ecrireToilettes(_etage->getToilettes(), points);


    // cr��ation de balise "arcs"
    QDomElement arcs = doc.createElement("arcs");
    etage.appendChild(arcs); // filiation de la balise "echelle"
    this->ecrireLiens(_etage->getLiens(), arcs);

}

EcritureDom::~EcritureDom()
{
    // insertion en d��but de document de <?xml version="1.0" ?>
    QDomNode noeud = doc.createProcessingInstruction("xml","version=\"1.0\"");
    doc.insertBefore(noeud,doc.firstChild());
    // sauvegarde dans le flux (deux espaces de d��calage dans l'arborescence)
    doc.save(out,2);
    file.close();
}
