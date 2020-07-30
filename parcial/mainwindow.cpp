#include "ui_mainwindow.h"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,400,400);

    //add ball
    Ball = new ball(0,0);
    scene->addItem(Ball);

    Ball2= new ball(200,20);
    scene->addItem(Ball2);

    Ball3= new ball(100,50);
    scene->addItem(Ball3);

    //add wall
    Wall = new wall(80,200,100,20);
    scene->addItem(Wall);

    Wall2 = new wall(200,400,100,20);
    scene->addItem(Wall2);

    Wall3 = new wall(0,200,10,20);
    scene->addItem(Wall3);

}

MainWindow::~MainWindow()
{
    delete ui;
}

