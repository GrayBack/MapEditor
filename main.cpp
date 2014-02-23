#include <QtGui/QApplication>
#include "mainwindow.h"

#include "ecrituredom.h"

int main(int argc, char *argv[])
{

    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();*/

    Salle* salle1 = new Salle("1", 1, 1, "Salle 1");
    Salle* salle2 = new Salle("2", 2, 2, "Salle 2");
    Porte* p1 = new Porte("3", 1, 2, "Porte Salle 1");
    Porte* p2 = new Porte("7", 75, 87, "Porte etage 1 Salle 2");
    Ascenseur* a1 = new Ascenseur("4", 6, 34, "Ascenseur 1");
    Couloir* c1 = new Couloir("5", 75, 87, "couloir etage 1 batiment x");
    Escalier* e1 = new Escalier("6", 45, 187, "escalier etage 1 batiment x");
    QRCode* qr1 =new QRCode("8", 98, 63, "QrCode 12","Vous etes ici : couloir etage 1 batiment x");
    Toilette* t1 = new Toilette("9", 75, 87, "Toilette etage 1 batiment x");

    Etage* etage=new Etage("etage 1","imagePath");
    etage->setDebutEchelle(new Point("1000",0,0));
    etage->setDebutEchelle(new Point("1001",0,20));
    etage->ajouterSalle(salle1);
    etage->ajouterSalle(salle2);
    etage->ajouterPorte(p1);
    etage->ajouterAscenseur(a1);
    etage->ajouterCouloir(c1);
    etage->ajouterEscalier(e1);
    etage->ajouterPorte(p2);
    etage->ajouterQRCode(qr1);
    etage->ajouterToilette(t1);
    etage->ajouterLien(new Lien(salle1,p1));
    etage->ajouterLien(new Lien(salle2,p2));
    etage->ajouterLien(new Lien(p1,c1));
    etage->ajouterLien(new Lien(p2,c1));
    etage->ajouterLien(new Lien(e1,c1));
    etage->ajouterLien(new Lien(qr1,c1));
    etage->ajouterLien(new Lien(t1,c1));
    etage->ajouterLien(new Lien(a1,c1));






    EcritureDom ed(etage);

    //return a.exec();


}
