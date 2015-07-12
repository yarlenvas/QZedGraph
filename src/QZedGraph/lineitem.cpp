#include "lineitem.h"

//QZedGraph Namespace
namespace QZedGraph
{
LineItem::LineItem()
{

}

void LineItem::Init(float lineWidth, SymbolType::SymbolType symbolType, const QColor &color)
{
    _line = new Line( new QColor(color) );
    if ( lineWidth == 0 )
    {
        _line->setIsVisible(false);
    }
    else
    {
        _line->setWidth(lineWidth);
    }

    _symbol = new Symbol( symbolType, color );
}

LineItem::LineItem(QString label, PointPairList *points, const QColor &color,
                   SymbolType::SymbolType symbolType, float lineWidth):CurveItem( label, points )
{

    Init(lineWidth, symbolType, color);

}

LineItem::LineItem(QString label, std::vector<double> &x, std::vector<double> &y,
                   const QColor &color, SymbolType::SymbolType symbolType):CurveItem( label, new PointPairList(&x, &y) )
{


    Init(1.0F, symbolType,color);





}

}

