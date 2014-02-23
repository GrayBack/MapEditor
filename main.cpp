#include <QtGui/QApplication>
#include "mainwindow.h"

#include "ecrituredom.h"

int main(int argc, char *argv[])
{

    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();*/

    Etage* etage=new Etage("etage 1","imagePath");
    etage->ajouterSalle(new Salle("1", 1, 1, "Salle 1"));
    etage->ajouterSalle(new Salle("2", 2, 2, "Salle 2"));
    etage->ajouterPorte(new Porte("3", 1, 2, "Porte Salle 1"));
    etage->ajouterAscenseur(new Ascenseur("4", 6, 34, "Ascenseur 1"));
    etage->ajouterCouloir(new Couloir("5", 75, 87, "couloir etage 1 batiment x"));
    etage->ajouterEscalier(new Escalier("6", 45, 187, "escalier etage 1 batiment x"));
    etage->ajouterPorte(new Porte("7", 75, 87, "Porte etage 1 Salle 2"));
    etage->ajouterQRCode(new QRCode("8", 98, 63, "QrCode 12","Vous etes ici : couloir etage 1 batiment x"));
    etage->ajouterToilette(new Toilette("9", 75, 87, "Toilette etage 1 batiment x"));


    EcritureDom ed(etage);

    //return a.exec();


}
