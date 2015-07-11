#include "border.h"

//QZedGraph Namespace
namespace QZedGraph
{

Border::Border():LineBase()
{
    _inflateFactor = 0.0F;
}

Border::Border(bool isVisible, const QColor &color, float width):LineBase(color)
{
    _width = width;
    _isVisible = isVisible;
}

}


