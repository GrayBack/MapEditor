#include "liaison.h"
#include "gpoint.h"
#include <QGraphicsEllipseItem>

Liaison::Liaison(GraphicsView * _parent)
{
    this->parent = _parent;
}

void Liaison::mousePresseEvent(QGraphicsSceneMouseEvent *event){

    if (event->button() == Qt::RightButton){

    }
    QGraphicsLineItem *point = new QGraphicsLineItem(this->parent->mapFromGlobal(QCursor::pos()).rx(),
                                                     this->parent->mapFromGlobal(QCursor::pos()).ry(),
                                                     this->parent->mapFromGlobal(QCursor::pos()).rx(),
                                                     this->parent->mapFromGlobal(QCursor::pos()).ry());
}
