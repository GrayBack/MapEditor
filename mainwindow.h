#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "type_point.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void affichageVignette(TypePoint fen);
    ~MainWindow();
    
public slots :
    void definirEchelle();
    void definirEntreeSortie();
    void definirEscalier();
    void definirAssenceur();
    void definirCouloir();
    void definirSalle();
    void definirPorte();
    void definirLiaison();
    void definirPosQrcode();
    void definirSelection();
    void definirWc();

    void enregistrer();
    void charger();
    void extraire();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
