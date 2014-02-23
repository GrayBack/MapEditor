#ifndef QRCODE_H
#define QRCODE_H

#include"namedpoint.h"

class QRCode : public NamedPoint
{
public:
    QRCode(QString id, double x, double y, QString name, QString texte);
    TypePoint getTypePoint();
    QString getText();
private:
    QString _texte;
};

#endif // QRCODE_H
