#include "fill.h"
#include <limits>

namespace QZedGraph
{

void Fill::Init()
{
    _color = new QColor(255,255,255);
    _secondaryValueGradientColor = new QColor(255,255,255);
    _brush = NULL;
    _type = FillType::None;
    _isScaled = true;
    _alignH = AlignH::Center;
    _alignV = AlignV::Center;
    _rangeMin = 0.0;
    _rangeMax = 1.0;
    _rangeDefault = std::numeric_limits<double>::max() ;
    _gradientBM = NULL;

    //    _colorList = null;
    //    _positionList = null;
    //    _angle = 0;
    //    _image = null;
    //    _wrapMode = WrapMode.Tile;
}

Fill::Fill()
{
    Init();
}

Fill::Fill(QColor *color, QBrush *brush, FillType::FillType type)
{
    Init();
    _color = color;
    _brush = brush;
    _type = type;
}

Fill::Fill(QColor *color)
{

    Init();
    _color = color;
    if ( color != NULL )
    {
        _type = FillType::Solid;
    }

}


}