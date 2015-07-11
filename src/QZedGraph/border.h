#ifndef BORDER_H
#define BORDER_H



#include <linebase.h>


//QZedGraph Namespace
namespace QZedGraph
{

class Border : public LineBase
{

private:
    float	_inflateFactor;

public:
    Border();

    Border( bool isVisible, const QColor& color, float width );



};
}


#endif // BORDER_H
