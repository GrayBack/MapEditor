#ifndef GPOINT_H
#define GPOINT_H
#include <QtGui>
#include "graphicsview.h"
#include "point.h"

class GPoint : public QGraphicsEllipseItem
{
public:
    GPoint(GraphicsView *gv);
private:
    GraphicsView *parent;
    Point *point;
public:
    void mousePresseEvent(QGraphicsSceneMouseEvent * event);
};

#endif // GPOINT_H
