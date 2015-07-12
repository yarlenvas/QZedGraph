#ifndef CURVELIST_H
#define CURVELIST_H



#include <QList>
#include <curveitem.h>
#include <scale.h>


//TODO: Correct the design in order to avoid circular reference


//QZedGraph Namespace
namespace QZedGraph
{

class GraphPane;

class CurveList : public QList<CurveItem*>
{
public:
    CurveList();
    void GetRange( bool& bIgnoreInitial, bool& isBoundedRanges, QZedGraph::GraphPane* pane );
    void InitScale( Scale* scale, bool& isBoundedRanges );
};

}



#endif // CURVELIST_H
