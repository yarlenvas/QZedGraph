#include "linebase.h"
#include <QPen>


namespace QZedGraph {

void LineBase::Init()
{
    _width = 1.0F;
    _dashOn = 1.0F ;
    _dashOff = 1.0F;
    _isVisible = true;
    _style = Qt::SolidLine;
    _color = new QColor(Qt::black);
    _isAntiAlias = false;
    _gradientFill = new Fill( Qt::red, Qt::white );
    _gradientFill->setType(FillType::None);
}

LineBase::LineBase()
{
    Init();
}

LineBase::LineBase(const QColor& Color)
{
    Init();
    this->_color = new QColor(Color);
}





}


