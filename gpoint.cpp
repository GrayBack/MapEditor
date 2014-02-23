#include "gpoint.h"
#include <QDebug>

GPoint::GPoint(GraphicsView * _parent){
    this->parent = _parent;
    setFlag(ItemIsSelectable);
}

void GPoint::mousePresseEvent(QGraphicsSceneMouseEvent *event){

    if(event->button() == Qt::LeftButton){
        qDebug() << "Gpoint click gauche" << point;
    }
    if (event->button() == Qt::RightButton){
        qDebug() << "GPoint" << point;
    }
    QGraphicsLineItem *point = new QGraphicsLineItem(this->parent->mapFromGlobal(QCursor::pos()).rx(),
                                                     this->parent->mapFromGlobal(QCursor::pos()).ry(),
                                                     this->parent->mapFromGlobal(QCursor::pos()).rx(),
                                                     this->parent->mapFromGlobal(QCursor::pos()).ry());
    QPen pen = point->pen();
    pen.setColor(QColor(0,52,102));
    pen.setWidth(8);
    point->setPen(pen);

    qDebug() << "GPoint" << point;

    this->parent->scene()->addItem(point);

    this->point = new Point("idTest",this->parent->mapFromGlobal(QCursor::pos()).rx(),this->parent->mapFromGlobal(QCursor::pos()).ry());

    qDebug() << "Point" << this->point;
}
