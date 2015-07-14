#include "zedgraphcontrol.h"
//QZedGraph Namespace
#include <QPainter>

namespace QZedGraph
{


bool ZedGraphControl::isShowPointValues() const
{
    return _isShowPointValues;
}

void ZedGraphControl::setIsShowPointValues(bool isShowPointValues)
{
    _isShowPointValues = isShowPointValues;
}

GraphPane* ZedGraphControl::graphPane() const
{
    return _graphPane;
}

void ZedGraphControl::setGraphPane(GraphPane *graphPane)
{
    _graphPane = graphPane;
}

void ZedGraphControl::AxisChange()
{


    QPainter* g = new QPainter(this);

    this->graphPane()->AxisChange(g);
}

void ZedGraphControl::Invalidate()
{
    this->update();
}






void ZedGraphControl::paintEvent(QPaintEvent *pe)
{

    QWidget::paintEvent(pe);


    QPainter* painter = new QPainter(this);


    this->_graphPane->Draw(painter);





    //painter->drawText(QRect(20,20,200,200), "HOLA MUNDO");
    painter->end();

}



ZedGraphControl::ZedGraphControl(QWidget *parent) : QWidget(parent)
{
    QPalette Pal(palette());

    this->resize(400,400);

    QRectF* rect = new QRectF( 0, 0, this->width(), this->height() );
    this->_graphPane = new GraphPane(rect, "TITLE", "XAXIS", "YAXIS");

    //Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    this->show();

}




}

