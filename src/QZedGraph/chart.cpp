#include "chart.h"

//QZedGraph Namespace
namespace QZedGraph
{

Chart::Chart()
{

    _isRectAuto = true;
    _border = new Border( true, Qt::black , 1.0F );
    _fill = new Fill( Qt::white, NULL, FillType::Brush );

}
}



