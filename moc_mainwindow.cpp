/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Feb 23 13:13:04 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      29,   11,   11,   11, 0x0a,
      51,   11,   11,   11, 0x0a,
      69,   11,   11,   11, 0x0a,
      88,   11,   11,   11, 0x0a,
     105,   11,   11,   11, 0x0a,
     120,   11,   11,   11, 0x0a,
     135,   11,   11,   11, 0x0a,
     152,   11,   11,   11, 0x0a,
     171,   11,   11,   11, 0x0a,
     190,   11,   11,   11, 0x0a,
     204,   11,   11,   11, 0x0a,
     214,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0definirEchelle()\0"
    "definirEntreeSortie()\0definirEscalier()\0"
    "definirAssenceur()\0definirCouloir()\0"
    "definirSalle()\0definirPorte()\0"
    "definirLiaison()\0definirPosQrcode()\0"
    "definirSelection()\0enregistrer()\0"
    "charger()\0extraire()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->definirEchelle(); break;
        case 1: _t->definirEntreeSortie(); break;
        case 2: _t->definirEscalier(); break;
        case 3: _t->definirAssenceur(); break;
        case 4: _t->definirCouloir(); break;
        case 5: _t->definirSalle(); break;
        case 6: _t->definirPorte(); break;
        case 7: _t->definirLiaison(); break;
        case 8: _t->definirPosQrcode(); break;
        case 9: _t->definirSelection(); break;
        case 10: _t->enregistrer(); break;
        case 11: _t->charger(); break;
        case 12: _t->extraire(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
