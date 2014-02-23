#ifndef COULOIR_H
#define COULOIR_H

#include"namedaccessiblepoint.h"

class Couloir : public NamedAccessiblePoint
{
public:
    Couloir(QString id, double x, double y, QString name);
    TypePoint getTypePoint();
    bool getEstAccessiblePourLesHandicapes();
    void setEstAccessiblePourLesHandicapes(bool);
    ~Couloir();
private:
    bool _estAccessiblePourLesHandicapes;
};

#endif // COULOIR_H
