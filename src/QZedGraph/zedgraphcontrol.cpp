#include "zedgraphcontrol.h"
//QZedGraph Namespace
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

GraphPane *ZedGraphControl::graphPane() const
{
    return _graphPane;
}

void ZedGraphControl::setGraphPane(GraphPane *graphPane)
{
    _graphPane = graphPane;
}

void ZedGraphControl::AxisChange()
{

    //TODO: Implemten method using QPainter
//    if ( BeenDisposed || _masterPane == null )
//        return;

//    using ( Graphics g = this.CreateGraphics() )
//    {
//        _masterPane.AxisChange( g );
//        //g.Dispose();
//    }

//    if ( _isAutoScrollRange )
//        SetScrollRangeFromData();
}


ZedGraphControl::ZedGraphControl(QWidget *parent) : QWidget(parent)
{
    QPalette Pal(palette());

    this->_graphPane = new GraphPane();
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    this->show();

}




}

