#include "graphicsview.h"

#include <QGraphicsEllipseItem>
#include <QPen>

#include "gpoint.h"
#include "echelle.h"
#include "ascenseur.h"
#include "couloir.h"
#include "escalier.h"
#include "porte.h"
#include "qrcode.h"
#include "salle.h"
#include "toilette.h"
#include "entreesortie.h"
#include "liaison.h"

void GraphicsView::setTypePoint(TypePoint type)
{
    _typePoint = type;
}

TypePoint GraphicsView::geTypePoint()
{
    return _typePoint;
}


GraphicsView::GraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{   idComp = 0;
    lastX = 0;
    lastY = 0;
    correct = true;
    mark = false;
    lastLine = NULL;
    lastMark = NULL;
    _typePoint = SELECTION;
}

void GraphicsView::mousePressEvent(QMouseEvent* event){
    QGraphicsView::mousePressEvent(event);

    Echelle * posCursor = new Echelle;
    int posX= this->mapToScene(event->pos()).rx();
    posCursor->setX(this->mapToScene(event->pos()).rx());
    int posY= this->mapToScene(event->pos()).ry();
    posCursor->setY(this->mapToScene(event->pos()).ry());

    /*if(event->button() == Qt::RightButton){
        if(scene()->itemAt(posX,posY)->isSelected()){
            qDebug() << "Selected" << posY;
        }
    }*/
    if(_typePoint == SELECTION){
        if(scene()->itemAt(posX,posY)->isSelected()){
            qDebug() << "Selected" << posY;
        }
    }

    if(event->button() == Qt::LeftButton){

        GPoint *p =new GPoint(this);

        switch (_typePoint) {

        case SALLE :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(102,0,153));
            p->setPen(Qt::NoPen);

            scene()->addItem(p);

            Salle* salle = new Salle(QString::number(this->idComp),posX, posY,"");
            _etage->ajouterSalle(salle);
            this->idComp++;

            qDebug() << "TestSalleX !" << posCursor->getX();
            qDebug() << "TestSalleY !" << posCursor->getY();
            break;
        }
        case TOILETTE :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(240,200,230));
            p->setPen(Qt::NoPen);

            scene()->addItem(p);

            Toilette* toilette = new Toilette(QString::number(this->idComp),posX, posY,"");
            _etage->ajouterToilette(toilette);
            idComp++;

            qDebug() << "TestToiletteX !" << posCursor->getX();
            qDebug() << "TestToiletteX !" << posCursor->getY();
            break;
        }
        case ESCALIER :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(135,86,26));
            p->setPen(Qt::NoPen);
            scene()->addItem(p);

            Escalier* esc = new Escalier(QString::number(this->idComp),posX, posY,"");
            _etage->ajouterEscalier(esc);
            idComp++;

            qDebug() << "TestEscalierX !" << posCursor->getX();
            qDebug() << "TestEscalierY !" << posCursor->getY();
            break;
        }
        case ASCENSEUR :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(219,0,115));
            p->setPen(Qt::NoPen);
            scene()->addItem(p);

            Ascenseur* asc= new Ascenseur(QString::number(this->idComp),posX, posY,"");
            _etage->ajouterAscenseur(asc);
            idComp++;

            qDebug() << "TestAscenseurX !" << posCursor->getX();
            qDebug() << "TestAscenseurY !" << posCursor->getY();
            break;
        }
        case PORTE :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(0,255,0));
            p->setPen(Qt::NoPen);
            scene()->addItem(p);

            Porte* porte = new Porte(QString::number(this->idComp),posX, posY,"");
            _etage->ajouterPorte(porte);
            idComp++;

            qDebug() << "TesPortetX !" << posCursor->getX();
            qDebug() << "TestPorteY !" << posCursor->getY();
            break;
        }
        case QRCODE :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(158,158,158));
            p->setPen(Qt::NoPen);
            scene()->addItem(p);

            QRCode* asc= new QRCode(QString::number(this->idComp),posX, posY,"","");
            _etage->ajouterQRCode(asc);
            idComp++;

            qDebug() << "TestQrcodeX !" << posCursor->getX();
            qDebug() << "TestQrcodeY !" << posCursor->getY();
            break;
        }
        case COULOIR :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(49,140,231));
            p->setPen(Qt::NoPen);
            scene()->addItem(p);

            Couloir* asc= new Couloir(QString::number(this->idComp),posX, posY,"");
            _etage->ajouterCouloir(asc);
            idComp++;

            qDebug() << "TestCouloirX !" << posCursor->getX();
            qDebug() << "TestCouloirY !" << posCursor->getY();
            break;
        }
        case ENTREESORTIE :
        {
            p->setRect(posCursor->getX()-10, posCursor->getY()-10, 20, 20);
            p->setBrush(QColor(255,200,20));
            p->setPen(Qt::NoPen);
            scene()->addItem(p);

            EntreeSortie* es = new EntreeSortie(QString::number(this->idComp),posX, posY,"");
            _etage->ajouterEntreeSortie(es);
            idComp++;

            qDebug() << "TestESX !" << posCursor->getX();
            qDebug() << "TestESY !" << posCursor->getY();
            break;
        }
        case LIAISON :
        {
            /*Lien* es = new Lien();
            _etage->ajouterLien(es);
            idComp++;

            qDebug() << "TestLienX !" << posCursor->getX();
            qDebug() << "TestLienY !" << posCursor->getY();
            break;*/
          }
            lastX = posCursor->getX();
            lastY = posCursor->getY();

        default :
            break;
        }
    }
}


void GraphicsView::mouseMoveEvent(QMouseEvent *event){}
/*    QGraphicsView::mouseMoveEvent(event);

    this->correctX = mapToScene(event->pos()).rx();
    this->correctY = mapToScene(event->pos()).ry();

    if(this->link){
        this->mark = true;
        if(this->correct){
            double pi = 3.14159265;
            if(mapToScene(event->pos()).rx()-lastX != 0){
                double angle = atan2((lastY-correctY),(correctX-lastX))*180/pi;
                if((angle>-22.5 && angle<= 22.5) || ( angle>157.5 || angle <=-157.5)){
                    correctY = this->lastY;
                }
                else if((angle>67.5 && angle <= 112.5) || (angle<-67.5 && angle>=-112.5)){
                    correctX = this->lastX;

                }
            }
        }
        if(lastLine!=NULL){
            scene()->removeItem(lastLine);
        }
      Liaison *liaison= new Liaison(this);
      liaison->setLine(this->lastX, this->lastY, correctX, correctY);
      QPen p = liaison->pen();
      p.setColor(QColor(0,0,0));
      p.setWidth(6);
      liaison->setPen(p);
      scene()->addItem(liaison);
      lastLine = liaison;
      liaison->show();
    }




    if(lastMark!=NULL){
        scene()->removeItem(lastMark);
    }
    if(mark){
        QGraphicsEllipseItem *markItem = new QGraphicsEllipseItem(correctX-10,correctY-10, 20, 20);
        markItem->setBrush(QColor(0,0,0));
        markItem->setPen(Qt::NoPen);
        scene()->addItem(markItem);
        lastMark = markItem;
    }

}
*/
void GraphicsView::keyPressEvent(QKeyEvent *event){}


