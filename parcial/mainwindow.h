#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <ui_mainwindow.h>
#include <QGraphicsScene>
#include <ball.h>
#include "wall.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    ball * Ball;
    ball * Ball2;
    ball * Ball3;
    wall * Wall;
    wall * Wall2;
    wall * Wall3;
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
};
#endif // MAINWINDOW_H
