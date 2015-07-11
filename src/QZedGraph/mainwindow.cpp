#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "qzedenums.h"

#include "zedgraphcontrol.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    QZedAxisTypes::AxisType axType = QZedAxisTypes::Linear;

    ui->setupUi(this);


    ZedGraphControl* chartControl = new ZedGraphControl(ui->centralWidget);



}

MainWindow::~MainWindow()
{
    delete ui;
}
