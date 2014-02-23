#include "qrcode.h"

QRCode::QRCode(QString id, double x, double y, QString name, QString texte):NamedPoint(id,x,y,name)
{
    _texte=texte;
}

TypePoint QRCode::getTypePoint(){
    return QRCODE;
}
