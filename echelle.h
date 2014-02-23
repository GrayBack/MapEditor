#ifndef ECHELLE_H
#define ECHELLE_H

class Echelle
{
public:
    Echelle();
    void setX(double x);
    void setY(double y);
    void setValue(int value);

    double getX();
    double getY();
    int getValue();

private:
    double _x;
    double _y;
    int _value;

};

#endif // ECHELLE_H
