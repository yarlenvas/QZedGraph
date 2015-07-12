#include "axis.h"

//QZedGraph Namespace
namespace QZedGraph
{

Scale *Axis::scale() const
{
    return _scale;
}

void Axis::setScale(Scale *scale)
{
    _scale = scale;
}
Axis::Axis()
{
    _scale = new Scale();
}

Axis::Axis(const QString &title)
{
 _scale = new Scale();
 this->_title->setText(new QString(title));
}

}



