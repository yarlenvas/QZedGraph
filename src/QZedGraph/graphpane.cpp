#include "graphpane.h"

//QZedGraph Namespace
namespace QZedGraph
{




GraphPane::GraphPane()
{

    _curveList = new CurveList();

}

CurveList *GraphPane::curveList() const
{
    return _curveList;
}

LineItem* GraphPane::AddCurve(const QString &label, vector<double> &x, vector<double> &y, const QColor &color, SymbolType::SymbolType symbolType)
{

    LineItem* curve = new LineItem( label, x, y, color, symbolType );

    _curveList->append(curve);




    return curve;
}

}



