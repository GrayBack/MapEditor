#ifndef FENLIAISON_H
#define FENLIAISON_H

#include <QDialog>

namespace Ui {
class FenLiaison;
}

class FenLiaison : public QDialog
{
    Q_OBJECT
    
public:
    explicit FenLiaison(QWidget *parent = 0);
    ~FenLiaison();
    
private:
    Ui::FenLiaison *ui;
};

#endif // FENLIAISON_H
