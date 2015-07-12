#include "x2axis.h"

//QZedGraph Namespace
namespace QZedGraph
{

X2Axis::X2Axis()
{

}

X2Axis::X2Axis(const QString &title): Axis(title)
{
    _isVisible = false;

//    _majorGrid._isZeroLine = Default.IsZeroLine;
//    _scale._fontSpec.Angle = 180F;
//    _title._fontSpec.Angle = 180F;
}

}



