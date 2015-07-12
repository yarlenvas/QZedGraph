#include "curvelist.h"
#include <graphpane.h>
//QZedGraph Namespace
namespace QZedGraph
{


CurveList::CurveList()
{

}

void CurveList::GetRange(bool &bIgnoreInitial, bool &isBoundedRanges, GraphPane *pane)
{

    double	tXMinVal;
    double	tXMaxVal;
    double	tYMinVal;
    double	tYMaxVal;



    InitScale( pane->xAxis()->scale(), isBoundedRanges );
//    InitScale( pane->x2Axis()->scale(), isBoundedRanges );

}

void CurveList::InitScale(Scale *scale, bool &isBoundedRanges)
{

}

}


