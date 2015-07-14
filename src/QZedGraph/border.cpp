#include "border.h"

#include <panebase.h>

//QZedGraph Namespace
namespace QZedGraph
{

Border::Border():LineBase()
{
    _inflateFactor = 0.0F;
}

Border::Border(bool isVisible, const QColor &color, float width):LineBase(color)
{
    _width = width;
    _isVisible = isVisible;
}

void Border::Draw(QPainter *g, PaneBase *pane, float scaleFactor, QRectF *rect)
{
    // Need to use the RectangleF props since rounding it can cause the axisFrame to
    // not line up properly with the last tic mark
    if ( _isVisible )
    {
        QRectF* tRect = rect;


        //TODO: INflatefactor???
//        float scaledInflate = (float) ( _inflateFactor * scaleFactor );
//        tRect.Inflate( scaledInflate, scaledInflate );

        QPen* pen = GetPen( pane, scaleFactor, NULL);
        //g.DrawRectangle( pen, tRect.X, tRect.Y, tRect.Width, tRect.Height );
        g->setPen(*pen);
        g->drawRect(*rect);
    }
}

QPen *Border::GetPen(PaneBase *pane, float scaleFactor, PointPair *dataValue)
{
//    Color color = _color;
//    if ( _gradientFill.IsGradientValueType )
//        color = _gradientFill.GetGradientColor( dataValue );

//    QPen* pen = new QPen( color,
//                pane.ScaledPenWidth( _width, scaleFactor ) );

//    pen.DashStyle = _style;

//    if ( _style == DashStyle.Custom )
//    {
//        if ( _dashOff > 1e-10 && _dashOn > 1e-10 )
//        {
//            pen.DashStyle = DashStyle.Custom;
//            float[] pattern = new float[2];
//            pattern[0] = _dashOn;
//            pattern[1] = _dashOff;
//            pen.DashPattern = pattern;
//        }
//        else
//            pen.DashStyle = DashStyle.Solid;
//    }

    //TODO: IMplementes commented funcionality,
    //TODO: Delete by default blue pen
    QPen* pen = new QPen( Qt::blue);
    return pen;
}

}


