#include "majortic.h"

//QZedGraph Namespace
namespace QZedGraph
{


MajorTic::MajorTic()
{

    _size = 5.0;
    _color = new QColor(Qt::black);
    _penWidth = 1.0;

    _isOutside = true;
    _isInside = true;
    _isOpposite = true;
    _isCrossOutside = true;
    _isCrossInside = true;

    _isBetweenLabels = false;

}


}


