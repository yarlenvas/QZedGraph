#ifndef LINEITEM_H
#define LINEITEM_H

#include <curveitem.h>
#include <qzedenums.h>
#include <line.h>
#include <symbol.h>

//QZedGraph Namespace
namespace QZedGraph
{


class LineItem : public CurveItem
{
public:
    LineItem();

    LineItem( QString label, PointPairList* points, const QColor& color,
              SymbolType::SymbolType symbolType, float lineWidth );

    LineItem(QString label, std::vector<double>& x, std::vector<double>& y,const QColor& color,
              SymbolType::SymbolType symbolType);

    void Init(float lineWidth, SymbolType::SymbolType symbolType, const QColor &color);
private:
    Line* _line;
    Symbol* _symbol;

};


}
#endif // LINEITEM_H
