#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "qzedenums.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    QZedAxisTypes::AxisType axType = QZedAxisTypes::Linear;

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
