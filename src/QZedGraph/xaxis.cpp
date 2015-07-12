#include "xaxis.h"


//QZedGraph Namespace
namespace QZedGraph
{
XAxis::XAxis()
{

}

XAxis::XAxis(const QString &title): Axis(title)
{
    _isVisible = true;
    //_majorGrid._isZeroLine = Default.IsZeroLine;
    //_scale._fontSpec.Angle = 0F;
}

}


