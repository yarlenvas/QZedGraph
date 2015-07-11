#ifndef MINORTIC_H
#define MINORTIC_H


#include <QColor>

//QZedGraph Namespace
namespace QZedGraph
{


class MinorTic
{


protected:

    bool	_isOutside;
    bool	_isInside;
    bool	_isOpposite;
    bool	_isCrossOutside;
    bool	_isCrossInside;

    float _penWidth;
    float _size;

    QColor* _color;

public:
    MinorTic();
};

}



#endif // MINORTIC_H
