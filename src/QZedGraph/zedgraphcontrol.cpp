#include "zedgraphcontrol.h"

ZedGraphControl::ZedGraphControl(QWidget *parent) : QWidget(parent)
{

    this->setGeometry(0,0,640, 480);
    QPalette Pal(palette());

    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    this->show();

}

