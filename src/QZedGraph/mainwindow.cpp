#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qzedgraphtypes.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    QZedTypes::AxisType axType = QZedTypes::Linear;

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
