#ifndef COMMIS_H
#define COMMIS_H
#include <QMainWindow>
#include "oglwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class COMMIS; }
QT_END_NAMESPACE

class COMMIS : public QMainWindow
{
    Q_OBJECT

public:
    COMMIS(QWidget *parent = nullptr);
    ~COMMIS();
    GlWidget* openGlW;

private slots:
    void on_Create_vertex_clicked();

    void on_Delete_vertex_clicked();

    void on_Clear_graph_clicked();

    void on_Create_edge_clicked();

    void on_Optimal_rout_clicked();

private:
    Ui::COMMIS *ui;

};
#endif // thatsssss commis.h
