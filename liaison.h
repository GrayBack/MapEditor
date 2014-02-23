#ifndef LIAISON_H
#define LIAISON_H

#include "graphicsview.h"
#include <QGraphicsLineItem>

class Liaison : public QGraphicsLineItem
{
public:
    Liaison(GraphicsView *gv);
private:
    GraphicsView *parent;
    Liaison *liaison;
public:
    void mousePresseEvent(QGraphicsSceneMouseEvent * event);
};

#endif // LIAISON_H
