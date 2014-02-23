#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QGraphicsView>
#include <QDebug>
#include "type_point.h"
#include "etage.h"

class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:

    explicit GraphicsView(QWidget *parent = 0);
    QWidget _parent;
    TypePoint _typePoint;
    void setTypePoint(TypePoint type);
    TypePoint geTypePoint();
    int idComp;
    Etage* _etage;

    int lastX ;
    int lastY ;
    bool link ;
    int correctX;
    int correctY;
    bool correct;
    bool mark;
    QGraphicsLineItem *lastLine;
    QGraphicsEllipseItem *lastMark;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    
signals:
    
public slots:
    
};

#endif // GRAPHICSVIEW_H
