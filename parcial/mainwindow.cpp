#include "ui_mainwindow.h"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,400,400);

    //add ball
    Ball = new ball;
    scene->addItem(Ball);

    //add wall
    Wall = new wall(80,200,100,20);
    scene->addItem(Wall);

}

MainWindow::~MainWindow()
{
    delete ui;
}

