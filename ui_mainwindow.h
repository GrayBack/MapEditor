/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Feb 23 12:51:07 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "graphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionD_finir_chelle;
    QAction *actionEntr_e_Sortie;
    QAction *actionEscalier;
    QAction *actionAssenceur;
    QAction *actionCouloir;
    QAction *actionSalle;
    QAction *actionPorte;
    QAction *actionLiaison;
    QAction *actionQr_Code;
    QAction *actionExtraire;
    QAction *actionSauvegarder;
    QAction *actionCharger;
    QAction *actionS_lection;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    GraphicsView *graphicsView;
    QListWidget *listWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1046, 961);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Bureau/mapcreator.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionD_finir_chelle = new QAction(MainWindow);
        actionD_finir_chelle->setObjectName(QString::fromUtf8("actionD_finir_chelle"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Bureau/echelle.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionD_finir_chelle->setIcon(icon1);
        actionEntr_e_Sortie = new QAction(MainWindow);
        actionEntr_e_Sortie->setObjectName(QString::fromUtf8("actionEntr_e_Sortie"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Bureau/entr\303\251e_sortie.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEntr_e_Sortie->setIcon(icon2);
        actionEscalier = new QAction(MainWindow);
        actionEscalier->setObjectName(QString::fromUtf8("actionEscalier"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../Bureau/escalier.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEscalier->setIcon(icon3);
        actionAssenceur = new QAction(MainWindow);
        actionAssenceur->setObjectName(QString::fromUtf8("actionAssenceur"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../Bureau/assenceur.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAssenceur->setIcon(icon4);
        actionCouloir = new QAction(MainWindow);
        actionCouloir->setObjectName(QString::fromUtf8("actionCouloir"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../Bureau/couloir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCouloir->setIcon(icon5);
        actionSalle = new QAction(MainWindow);
        actionSalle->setObjectName(QString::fromUtf8("actionSalle"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../Bureau/salle.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalle->setIcon(icon6);
        actionPorte = new QAction(MainWindow);
        actionPorte->setObjectName(QString::fromUtf8("actionPorte"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../Bureau/porte1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPorte->setIcon(icon7);
        actionLiaison = new QAction(MainWindow);
        actionLiaison->setObjectName(QString::fromUtf8("actionLiaison"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../Bureau/liaison.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLiaison->setIcon(icon8);
        actionQr_Code = new QAction(MainWindow);
        actionQr_Code->setObjectName(QString::fromUtf8("actionQr_Code"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../Bureau/qrcode.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionQr_Code->setIcon(icon9);
        actionExtraire = new QAction(MainWindow);
        actionExtraire->setObjectName(QString::fromUtf8("actionExtraire"));
        actionSauvegarder = new QAction(MainWindow);
        actionSauvegarder->setObjectName(QString::fromUtf8("actionSauvegarder"));
        actionCharger = new QAction(MainWindow);
        actionCharger->setObjectName(QString::fromUtf8("actionCharger"));
        actionS_lection = new QAction(MainWindow);
        actionS_lection->setObjectName(QString::fromUtf8("actionS_lection"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../Bureau/cursor.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionS_lection->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        graphicsView = new GraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 1, 2, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1046, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        mainToolBar->addAction(actionS_lection);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionD_finir_chelle);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEntr_e_Sortie);
        mainToolBar->addAction(actionEscalier);
        mainToolBar->addAction(actionAssenceur);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCouloir);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSalle);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPorte);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLiaison);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionQr_Code);
        mainToolBar->addSeparator();
        menuBar->addAction(menuFile->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Map Creator", 0, QApplication::UnicodeUTF8));
        actionD_finir_chelle->setText(QApplication::translate("MainWindow", "D\303\251finir \303\251chelle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionD_finir_chelle->setToolTip(QApplication::translate("MainWindow", "D\303\251finir \303\251chelle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEntr_e_Sortie->setText(QApplication::translate("MainWindow", "Entr\303\251e/Sortie", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEntr_e_Sortie->setToolTip(QApplication::translate("MainWindow", "entree/sortie", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEscalier->setText(QApplication::translate("MainWindow", "Escalier", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEscalier->setToolTip(QApplication::translate("MainWindow", "escalier", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAssenceur->setText(QApplication::translate("MainWindow", "Assenceur", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAssenceur->setToolTip(QApplication::translate("MainWindow", "assenceur", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCouloir->setText(QApplication::translate("MainWindow", "Couloir", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCouloir->setToolTip(QApplication::translate("MainWindow", "couloir", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSalle->setText(QApplication::translate("MainWindow", "Salle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSalle->setToolTip(QApplication::translate("MainWindow", "salle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPorte->setText(QApplication::translate("MainWindow", "Porte", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPorte->setToolTip(QApplication::translate("MainWindow", "porte", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLiaison->setText(QApplication::translate("MainWindow", "Liaison", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLiaison->setToolTip(QApplication::translate("MainWindow", "liaison", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQr_Code->setText(QApplication::translate("MainWindow", "Qr Code", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQr_Code->setToolTip(QApplication::translate("MainWindow", "qrcode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExtraire->setText(QApplication::translate("MainWindow", "Extraire", 0, QApplication::UnicodeUTF8));
        actionSauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        actionCharger->setText(QApplication::translate("MainWindow", "Charger", 0, QApplication::UnicodeUTF8));
        actionS_lection->setText(QApplication::translate("MainWindow", "S\303\251lection", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Arborescence", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Entit\303\251", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "B\303\242timent", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Etage", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        menuFile->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
