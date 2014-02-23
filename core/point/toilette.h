#ifndef TOILETTE_H
#define TOILETTE_H

#include"genre.h"
#include"type_point.h"
#include"namedaccessiblepoint.h"

class Toilette : public NamedAccessiblePoint
{

public:
    Toilette(QString id, double x, double y,QString name, bool estAccessiblePourLesHandicapes, Genre genre);
    Toilette(QString id, double x, double y,QString name);
    Genre getGenre();
    void setGenre(Genre g);
    bool getEstAccessiblePourLesHandicapes();
    TypePoint getTypePoint();
    ~Toilette();
private:
    Genre _genre;
    bool _estAccessiblePourLesHandicapes;
};

#endif // TOILETTE_H
