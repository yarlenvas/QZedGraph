#ifndef PANEBASE_H
#define PANEBASE_H

#include <gaplabel.h>
#include <QRectF>
#include <fill.h>

namespace QZedGraph
{


class Border;
class PaneBase
{

protected:
    GapLabel* _title;
    QRectF* _rect;
    QObject* _tag;
    bool _isFontsScaled;
    float _baseDimension;
    Fill*	_fill;
    Border* _border;



    float CalcScaleFactor();
    void DrawPaneFrame( QPainter* g, float scaleFactor );



public:
    PaneBase();

    PaneBase(const QString& title, QRectF* paneRect );


    void Draw(QPainter* g);

    GapLabel *title() const;
    void setTitle(GapLabel *title);
    void setTitle(const QString& value);
    float baseDimension() const;
};

}

#endif // PANEBASE_H
