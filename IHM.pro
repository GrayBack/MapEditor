#-------------------------------------------------
#
# Project created by QtCreator 2014-01-20T11:51:03
#
#-------------------------------------------------

QT       += core gui
QT      += xml

TARGET = IHM
TEMPLATE = app
INCLUDEPATH += . core core/point
DEPENDPATH += . core core/point


SOURCES += main.cpp\
        mainwindow.cpp \
    echelle.cpp \
    graphicsview.cpp \
    gpoint.cpp \
    core/etage.cpp \
    core/point/point.cpp \
    core/lien.cpp \
    core/parseur/parseur.cpp \
    core/point/toilette.cpp \
    core/batiment.cpp \
    core/projet.cpp \
    core/point/escalier.cpp \
    core/point/namedpoint.cpp \
    core/point/salle.cpp \
    core/point/couloir.cpp \
    core/point/namedaccessiblepoint.cpp \
    core/point/ascenseur.cpp \
    core/point/porte.cpp \
    core/point/qrcode.cpp \
    ecrituredom.cpp \
    core/point/entreesortie.cpp \
    liaison.cpp \
    fenliaison.cpp


HEADERS  += mainwindow.h \
    echelle.h \
    graphicsview.h \
    gpoint.h \
    core/etage.h \
    core/point/point.h \
    core/lien.h \
    parseur/parseur.h \
    core/point/toilette.h \
    core/genre.h \
    core/batiment.h \
    core/projet.h \
    core/point/type_point.h \
    core/point/escalier.h \
    core/point/namedpoint.h \
    core/point/salle.h \
    core/point/couloir.h \
    core/point/type_acces.h \
    core/point/namedaccessiblepoint.h \
    core/point/ascenseur.h \
    core/point/porte.h \
    core/point/qrcode.h \
    ecrituredom.h \
    core/point/entreesortie.h \
    liaison.h \
    fenliaison.h


FORMS    += \
    mainwindow.ui \
    fenliaison.ui

OTHER_FILES += \
    ../Bureau/etage1.png \
    ../Bureau/mapcreator.png

RESOURCES += \
    Images/images.qrc
