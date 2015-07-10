#include "margin.h"
#include "margindefaults.h"



QZedGraph::Margin::Margin()
{
    _left = QZedGraph::MarginDefaults::Left;
    _right = QZedGraph::MarginDefaults::Right;
    _top = QZedGraph::MarginDefaults::Top;
    _bottom = QZedGraph::MarginDefaults::Bottom;

}

