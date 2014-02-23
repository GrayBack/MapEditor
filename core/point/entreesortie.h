#ifndef ENTREESORTIE_H
#define ENTREESORTIE_H

#include"namedpoint.h"
  class EntreeSortie: public NamedPoint
  {
   public:
       EntreeSortie(QString id, double x, double y, QString name);
       TypePoint getTypePoint();
   private:
  };
#endif // ENTREESORTIE_H
