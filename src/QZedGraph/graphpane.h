#ifndef GRAPHPANE_H
#define GRAPHPANE_H

#include <panebase.h>
#include <qzedenums.h>
#include <vector>
#include <lineitem.h>
#include <curvelist.h>

//QZedGraph Namespace
namespace QZedGraph
{

using namespace std;

class GraphPane : public PaneBase
{
private:
    CurveList* _curveList;


public:
    GraphPane();

    LineItem* AddCurve(const QString& label, vector<double>& x,
                  vector<double>& y, const QColor& color,
                  SymbolType::SymbolType symbolType);

    CurveList *curveList() const;
};

}



#endif // GRAPHPANE_H
