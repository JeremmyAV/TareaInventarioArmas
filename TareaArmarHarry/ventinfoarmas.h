#ifndef VENTINFOARMAS_H
#define VENTINFOARMAS_H

#include <QDialog>

namespace Ui {
class ventInfoArmas;
}

class ventInfoArmas : public QDialog
{
    Q_OBJECT

public:
    explicit ventInfoArmas(QWidget *parent = nullptr);
    ~ventInfoArmas();

private:
    Ui::ventInfoArmas *ui;
};

#endif // VENTINFOARMAS_H
