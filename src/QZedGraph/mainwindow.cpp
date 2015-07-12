#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <math.h>
#include "qzedenums.h"
#include <curvelist.h>
#include <zedgraphcontrol.h>
#include <vector>

using namespace QZedGraph;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    this->z1 = new ZedGraphControl(ui->centralWidget);


    //
    // zedGraphControl1
    //

    this->z1->setObjectName("zedGraphControl1");
    this->z1->resize(680, 414);
    //this->z1->TabIndex = 0;


    loadData();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadData()
{

    z1->setIsShowPointValues(true);
    z1->graphPane()->setTitle("Test Case for C++ with QT");

    std::vector<double> x(100);
    std::vector<double> y(100);


    unsigned int	i;
    for ( i=0; i<100; i++ )
    {
        x.at(i) = (double) i / 100.0 * M_1_PI * 2.0;
        y.at(i) = sin(x[i] );
    }
    z1->graphPane()->AddCurve( "Sine Wave", x, y, Qt::red, SymbolType::Square );
    z1->graphPane()->curveList()->at(0)->AddPoint(1, 1);
    z1->AxisChange();
    z1->Invalidate();



}
