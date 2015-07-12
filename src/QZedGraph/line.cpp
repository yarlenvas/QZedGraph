#include "line.h"
#include <QPen>


namespace QZedGraph
{

Line::Line()
{

    Init();

}

Line::Line(QColor *color)
{
    Init();


    if(color == NULL)
    {
        _color = new QColor(Qt::red);
    }else
    {
        _color = color;
    }

    _stepType = StepType::NonStep;
    _isSmooth = false;
    _smoothTension = 0.5F;

    _fill = new Fill( Qt::red, NULL, FillType::None );

    _isOptimizedDraw = false;

}

}



