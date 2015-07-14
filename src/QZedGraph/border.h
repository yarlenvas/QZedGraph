#ifndef BORDER_H
#define BORDER_H



#include <linebase.h>
#include <QPainter>
#include <panebase.h>
#include <QRect>
#include <QPen>
//QZedGraph Namespace
namespace QZedGraph
{

class PaneBase;

class Border : public LineBase
{

private:
    float	_inflateFactor;

public:
    Border();

    Border( bool isVisible, const QColor& color, float width );


    void Draw( QPainter* g, PaneBase* pane, float scaleFactor, QRectF* rect );

    QPen* GetPen( PaneBase* pane, float scaleFactor, PointPair* dataValue );




};
}


#endif // BORDER_H
