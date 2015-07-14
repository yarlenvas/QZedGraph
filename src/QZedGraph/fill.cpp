#include "fill.h"
#include <limits>

namespace QZedGraph
{


FillType::FillType Fill::type() const
{
    return _type;
}

void Fill::setType(const FillType::FillType &type)
{
    _type = type;
}

void Fill::Draw(QPainter *g, QRectF *rect, PointPair *pt)
{

    //TODO: Validate is visible
    //    if ( this.IsVisible )
    //    {

    QBrush* Brush = this->MakeBrush(rect, pt);
    g->fillRect(*rect, *Brush );

    //    }
}

void Fill::Draw(QPainter *g, QRectF *rect)
{
    Draw( g, rect, NULL );
}
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

QBrush *Fill::MakeBrush(QRectF *rect, PointPair *dataValue)
{

    //TODO: Implements commented funcionality
//    // get a brush
//    if ( this.IsVisible && ( !_color.IsEmpty || _brush != null ) )
//    {
//        if ( rect.Height < 1.0F )
//            rect.Height = 1.0F;
//        if ( rect.Width < 1.0F )
//            rect.Width = 1.0F;

//        //Brush	brush;
//        if ( _type == FillType.Brush )
//        {
//            return ScaleBrush( rect, _brush, _isScaled );
//        }
//        else if ( IsGradientValueType )
//        {
//            if ( dataValue != null )
//            {
//                if ( !_secondaryValueGradientColor.IsEmpty )
//                {
//                    // Go ahead and create a new Fill so we can do all the scaling, etc.,
//                    // that is associated with a gradient
//                    Fill tmpFill = new Fill( _secondaryValueGradientColor,
//                            GetGradientColor( dataValue ), _angle );
//                    return tmpFill.MakeBrush( rect );
//                }
//                else
//                    return new SolidBrush( GetGradientColor( dataValue ) );
//            }
//            else if ( _rangeDefault != double.MaxValue )
//            {
//                if ( !_secondaryValueGradientColor.IsEmpty )
//                {
//                    // Go ahead and create a new Fill so we can do all the scaling, etc.,
//                    // that is associated with a gradient
//                    Fill tmpFill = new Fill( _secondaryValueGradientColor,
//                            GetGradientColor( _rangeDefault ), _angle );
//                    return tmpFill.MakeBrush( rect );
//                }
//                else
//                    return new SolidBrush( GetGradientColor( _rangeDefault ) );
//            }
//            else
//                return ScaleBrush( rect, _brush, true );
//        }
//        else
//            return new SolidBrush( _color );
//    }

    // Always return a suitable default
    return new QBrush(Qt::white, Qt::SolidPattern  );
}

Fill::Fill(const QColor &color1, const QColor &color2)
{
    Init();
}

Fill::Fill(const QColor& color, QBrush* brush, FillType::FillType type)
{
    Init();
    _color = new QColor(color);
    _brush = brush;
    _type = type;
}

Fill::Fill(const QColor &color)
{

    Init();
    _color = new QColor(color);
    if ( _color != NULL )
    {
        _type = FillType::Solid;
    }

}


}
