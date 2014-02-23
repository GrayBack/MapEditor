#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "echelle.h"
#include <QFileDialog>
#include <QGraphicsScene>
#include <QtGui>
#include "graphicsview.h"
#include "salle.h"
#include "etage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->showMaximized();
    // Création de l'interface graphique
    ui->setupUi(this);
    // Création du menu Fichier, avec les options Enregistrer, Extraire et Charger Image
    ui->menuFile->addAction("Charger Image",this,SLOT(charger()));
    ui->menuFile->addAction("Enregistrer",this,SLOT(enregistrer()));
    ui->menuFile->addAction("Extraire",this,SLOT(extraire()));

    // Création du groupe qui permet de rendre active une seule des actions (un seul bouton enfoncé)
    QActionGroup* group = new QActionGroup(this);
    group->setExclusive(true);
    group->addAction(ui->actionAssenceur);
    group->addAction(ui->actionCouloir);
    group->addAction(ui->actionD_finir_chelle);
    group->addAction(ui->actionEntr_e_Sortie);
    group->addAction(ui->actionEscalier);
    group->addAction(ui->actionLiaison);
    group->addAction(ui->actionPorte);
    group->addAction(ui->actionQr_Code);
    group->addAction(ui->actionSalle);
    group->addAction(ui->actionS_lection);

    // Rend les boutons enfonçables( un click -> enfoncé, autres click -> désenfoncé)
    ui->actionAssenceur->setCheckable(true);
    ui->actionCouloir->setCheckable(true);
    ui->actionD_finir_chelle->setCheckable(true);
    ui->actionEntr_e_Sortie->setCheckable(true);
    ui->actionEscalier->setCheckable(true);
    ui->actionLiaison->setCheckable(true);
    ui->actionPorte->setCheckable(true);
    ui->actionQr_Code->setCheckable(true);
    ui->actionSalle->setCheckable(true);
    ui->actionS_lection->setCheckable(true);

    //Connection des boutons à leurs action
    connect(ui->actionD_finir_chelle, SIGNAL(triggered()),this,SLOT(definirEchelle()));
    connect(ui->actionEntr_e_Sortie, SIGNAL(triggered()),this,SLOT(definirEntreeSortie()));
    connect(ui->actionEscalier, SIGNAL(triggered()),this,SLOT(definirEscalier()));
    connect(ui->actionAssenceur, SIGNAL(triggered()),this,SLOT(definirAssenceur()));
    connect(ui->actionCouloir, SIGNAL(triggered()),this,SLOT(definirCouloir()));
    connect(ui->actionSalle, SIGNAL(triggered()),this,SLOT(definirSalle()));
    connect(ui->actionPorte, SIGNAL(triggered()),this,SLOT(definirPorte()));
    connect(ui->actionLiaison, SIGNAL(triggered()),this,SLOT(definirLiaison()));
    connect(ui->actionQr_Code, SIGNAL(triggered()),this,SLOT(definirPosQrcode()));
    connect(ui->actionS_lection, SIGNAL(triggered()),this,SLOT(definirSelection()));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::definirEchelle(){
}
void MainWindow::definirEntreeSortie()
{
    ui->graphicsView->setTypePoint(ENTREESORTIE);
}

void MainWindow::definirEscalier(){
    ui->graphicsView->setTypePoint(ESCALIER);
}

void MainWindow::definirAssenceur(){
    ui->graphicsView->setTypePoint(ASCENSEUR);
}

void MainWindow::definirCouloir(){
    ui->graphicsView->setTypePoint(COULOIR);
}

void MainWindow::definirSalle(){
    ui->graphicsView->setTypePoint(SALLE);
}

void MainWindow::definirPorte(){
    ui->graphicsView->setTypePoint(PORTE);
}

void MainWindow::definirLiaison(){
    ui->graphicsView->setTypePoint(LIAISON);
}

void MainWindow::definirPosQrcode(){
    ui->graphicsView->setTypePoint(QRCODE);
}

void MainWindow::definirSelection(){
    ui->graphicsView->setTypePoint(SELECTION);
}

void MainWindow::enregistrer(){}
// Chargement d'une image
void MainWindow::charger(){

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setNameFilter(tr("Images(*.png *.jpg)"));

    QGraphicsScene *scene = new QGraphicsScene(this);
    QGraphicsPixmapItem *mapItem = new QGraphicsPixmapItem(0,scene);
    QPixmap mapImage;
    QString imageSel = dialog.getOpenFileName();

    mapImage.load(imageSel);
    //mapImage.load("/home/greg/Bureau/etage1.png");
    mapItem->setPixmap(mapImage);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->adjustSize();
    ui->graphicsView->show();

    // Extraction du nom de l'image sans l'extension
    QString imageNom =  imageSel.split("/").at(imageSel.split("/").size()-1).split('.').at(0);

    ui->graphicsView->_etage = new Etage(imageNom, imageSel);

    qDebug() << "Etage" << imageNom;
}
void MainWindow::extraire(){}
