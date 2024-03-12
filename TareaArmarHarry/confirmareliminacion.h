#ifndef CONFIRMARELIMINACION_H
#define CONFIRMARELIMINACION_H

#include "qlistwidget.h"
#include <QDialog>

namespace Ui {
class confirmarEliminacion;
}

class confirmarEliminacion : public QDialog
{
    Q_OBJECT

public:
    explicit confirmarEliminacion(QWidget *parent = nullptr);
    ~confirmarEliminacion();

    void actualizar();

private slots:
    void on_buttonBox_accepted();

    void on_listWidgetArmas_itemClicked(QListWidgetItem *item);

    void on_buttonConfElim_clicked();

    void on_confirmarEliminacion_rejected();

private:
    Ui::confirmarEliminacion *ui;
};

#endif // CONFIRMARELIMINACION_H
