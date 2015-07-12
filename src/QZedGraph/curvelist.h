#ifndef CURVELIST_H
#define CURVELIST_H

#include <QList>
#include <curveitem.h>

//QZedGraph Namespace
namespace QZedGraph
{

class CurveList : public QList<CurveItem*>
{
public:
    CurveList();
};

}



#endif // CURVELIST_H
