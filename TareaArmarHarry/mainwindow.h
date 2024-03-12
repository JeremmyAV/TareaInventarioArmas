#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qlistwidget.h"
#include <QMainWindow>
#include "infoarma.h"
#include "ventagregar.h"
#include "confirmareliminacion.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void actualizarInventario();

    void filtrarInventario();

private slots:
    void on_listWidgetArmas_itemDoubleClicked(QListWidgetItem *item);

    void on_buttonAgregar_clicked();

    void on_listWidgetArmas_itemClicked(QListWidgetItem *item);

    void on_buttonEliminar_clicked();

    void on_listWidgetTipoBuscar_itemClicked(QListWidgetItem *item);

    void on_listWidgetModBuscar_itemClicked(QListWidgetItem *item);

    void on_buttonAgregar_2_clicked();

    void on_buttonEliminar_2_clicked();

private:
    Ui::MainWindow *ui;

    infoArma *ventInAr; // Agregar un miembro para la ventana secundaria

    ventAgregar *ventAg;

    confirmarEliminacion *ventConfElim;
};
#endif // MAINWINDOW_H
