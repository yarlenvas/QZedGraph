#include "panebase.h"


#include <border.h>
//QZedGraph Namespace
namespace QZedGraph
{

GapLabel *PaneBase::title() const
{
}

void PaneBase::setTitle(GapLabel *title)
{
    _title = title;
}

void PaneBase::setTitle(const QString &value)
{
    this->title()->setText(new QString(value));
}

float PaneBase::baseDimension() const
{
    return _baseDimension;
}
void PaneBase::Draw(QPainter* g)
{

    if ( _rect->width() <= 1 || _rect->height() <= 1 )
    {
        return;
    }
    // calculate scaleFactor on "normal" pane size (BaseDimension)
    float scaleFactor = this->CalcScaleFactor();

//    // Fill the pane background and draw a border around it
    DrawPaneFrame( g, scaleFactor );

//    // Clip everything to the rect
//    g.SetClip( _rect );

//    // Draw the GraphItems that are behind everything
//    _graphObjList.Draw( g, this, scaleFactor, ZOrder.H_BehindAll );

//    // Draw the Pane Title
//    DrawTitle( g, scaleFactor );

//    // Draw the Legend
//    //this.Legend.Draw( g, this, scaleFactor );

//    // Reset the clipping
//    g.ResetClip();if ( _rect.Width <= 1 || _rect.Height <= 1 )
//        return;

//    // calculate scaleFactor on "normal" pane size (BaseDimension)
//    float scaleFactor = this.CalcScaleFactor();

//    // Fill the pane background and draw a border around it
//    DrawPaneFrame( g, scaleFactor );

//    // Clip everything to the rect
//    g.SetClip( _rect );

//    // Draw the GraphItems that are behind everything
//    _graphObjList.Draw( g, this, scaleFactor, ZOrder.H_BehindAll );

//    // Draw the Pane Title
//    DrawTitle( g, scaleFactor );

//    // Draw the Legend
//    //this.Legend.Draw( g, this, scaleFactor );

//    // Reset the clipping
//    g.ResetClip();

}

float PaneBase::CalcScaleFactor()
{
    float scaleFactor; //, xInch, yInch;
    const float ASPECTLIMIT = 1.5F;

    // if font scaling is turned off, then always return a 1.0 scale factor
    if ( !_isFontsScaled )
    {
        return 1.0f;
    }

    // Assume the standard width (BaseDimension) is 8.0 inches
    // Therefore, if the rect is 8.0 inches wide, then the fonts will be scaled at 1.0
    // if the rect is 4.0 inches wide, the fonts will be half-sized.
    // if the rect is 16.0 inches wide, the fonts will be double-sized.

    // Scale the size depending on the client area width in linear fashion
    if ( _rect->height() <= 0 )
    {
        return 1.0F;
    }


    float length = _rect->width();
    float aspect = _rect->width() / _rect->height();


    if ( aspect > ASPECTLIMIT )
    {
        length = _rect->height() * ASPECTLIMIT;
    }
    if ( aspect < 1.0F / ASPECTLIMIT )
    {
        length = _rect->width() * ASPECTLIMIT;
    }

    scaleFactor = length / ( _baseDimension * 72.0F );

    // Don't let the scaleFactor get ridiculous
    if ( scaleFactor < 0.1F )
    {
        scaleFactor = 0.1F;
    }

    return scaleFactor;

}

void PaneBase::DrawPaneFrame(QPainter *g, float scaleFactor)
{
    // Erase the pane background, filling it with the specified brush
    _fill->Draw( g, _rect );

    // Reduce the rect width and height by 1 pixel so that for a rect of
    // new RectangleF( 0, 0, 100, 100 ), which should be 100 pixels wide, we cover
    // from 0 through 99.  The draw routines normally cover from 0 through 100, which is
    // actually 101 pixels wide.
    QRectF* rect = new QRectF( _rect->x(), _rect->y(),
                               _rect->width() - 1,
                               _rect->height() - 1 );

    _border->Draw( g, this, scaleFactor, rect );
}

PaneBase::PaneBase()
{
    
}

PaneBase::PaneBase(const QString &title, QRectF *paneRect)
{

    _rect = paneRect;


    //TODO: Implementes commented functionality
    //_legend = new Legend();

    _baseDimension = 8.0F;
    //_margin = new Margin();
    //_titleGap = Default.TitleGap;

    //_isFontsScaled = Default.IsFontsScaled;
    //_isPenWidthScaled = Default.IsPenWidthScaled;
    _fill = new Fill(Qt::white );
    _border = new Border( true, Qt::black, 1.0 );

    //_title = new GapLabel( title, Default.FontFamily,
    //    Default.FontSize, Default.FontColor, Default.FontBold,
    //    Default.FontItalic, Default.FontUnderline );
    //_title._fontSpec.Fill.IsVisible = false;
    //_title._fontSpec.Border.IsVisible = false;

    //_graphObjList = new GraphObjList();

    _tag = NULL;

}


}


