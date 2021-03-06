#include "margin.h"
#include "margindefaults.h"


namespace QZedGraph
{

float Margin::left() const
{
    return _left;
}

void Margin::setLeft(float left)
{
    _left = left;
}

float Margin::right() const
{
    return _right;
}

void Margin::setRight(float right)
{
    _right = right;
}

float Margin::top() const
{
    return _top;
}

void Margin::setTop(float top)
{
    _top = top;
}

float Margin::bottom() const
{
    return _bottom;
}

void Margin::setBottom(float bottom)
{
    _bottom = bottom;
}


Margin::Margin()
{
    _left = QZedGraph::MarginDefaults::Left;
    _right = QZedGraph::MarginDefaults::Right;
    _top = QZedGraph::MarginDefaults::Top;
    _bottom = QZedGraph::MarginDefaults::Bottom;

}

}



