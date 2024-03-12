#ifndef VENTAGREGAR_H
#define VENTAGREGAR_H

#include "qlistwidget.h"
#include <QDialog>

namespace Ui {
class ventAgregar;
}

class ventAgregar : public QDialog
{
    Q_OBJECT

public:
    explicit ventAgregar(QWidget *parent = nullptr);
    ~ventAgregar();

private slots:
    void on_listWidgetModifie_itemClicked(QListWidgetItem *item);

    void on_listWidgetType_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::ventAgregar *ui;
};

#endif // VENTAGREGAR_H
