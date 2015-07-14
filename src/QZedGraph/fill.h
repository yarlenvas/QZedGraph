#ifndef FILL_H
#define FILL_H

#include <QColor>
#include <QBrush>
#include <QBitmap>
#include <QRectF>
#include <QPainter>
#include "qzedenums.h"
#include <pointpair.h>
#include <QBrush>
namespace QZedGraph
{
/// <summary>
/// A class that encapsulates color-fill properties for an object.  The <see cref="Fill"/> class
/// is used in <see cref="PaneBase.Rect"/>, <see cref="Chart.Rect"/>, <see cref="Legend"/>,
/// <see cref="Bar"/>, and <see cref="Line"/> objects.
/// </summary>
///
/// <author> John Champion </author>
/// <version> $Revision: 3.22 $ $Date: 2007-01-26 09:01:49 $ </version>

class Fill
{

private:


    /// <summary>
    /// Private field that stores the fill color.  Use the public
    /// property <see cref="Color"/> to access this value.  This property is
    /// only applicable if the <see cref="Type"/> is not <see cref="ZedGraph.FillType.None"/>.
    /// </summary>
    QColor* _color;


    /// <summary>
    /// Private field that stores the secondary color for gradientByValue fills.  Use the public
    /// property <see cref="SecondaryValueGradientColor"/> to access this value.  This property is
    /// only applicable if the <see cref="Type"/> is <see cref="ZedGraph.FillType.GradientByX"/>,
    /// <see cref="ZedGraph.FillType.GradientByY"/>, or <see cref="ZedGraph.FillType.GradientByZ"/>.
    /// </summary>
    QColor* _secondaryValueGradientColor;


    /// <summary>
    /// Private field that stores the custom fill brush.  Use the public
    /// property <see cref="Brush"/> to access this value.  This property is
    /// only applicable if the
    /// <see cref="Type"/> property is set to <see cref="ZedGraph.FillType.Brush"/>.
    /// </summary>
    QBrush*	_brush;


    /// <summary>
    /// Private field that determines the type of color fill.  Use the public
    /// property <see cref="Type"/> to access this value.  The fill color
    /// is determined by the property <see cref="Color"/> or
    /// <see cref="Brush"/>.
    /// </summary>
    FillType::FillType	_type;


    /// <summary>
    /// Private field that determines if the brush will be scaled to the bounding box
    /// of the filled object.  If this value is false, then the brush will only be aligned
    /// with the filled object based on the <see cref="AlignH"/> and <see cref="AlignV"/>
    /// properties.
    /// </summary>
    bool		_isScaled;
    /// <summary>
    /// Private field that determines how the brush will be aligned with the filled object
    /// in the horizontal direction.  This value is a <see cref="ZedGraph.AlignH"/> enumeration.
    /// This field only applies if <see cref="IsScaled"/> is false.
    /// properties.
    /// </summary>
    /// <seealso cref="AlignH"/>
    /// <seealso cref="AlignV"/>
    AlignH::AlignH		_alignH;


    /// <summary>
    /// Private field that determines how the brush will be aligned with the filled object
    /// in the vertical direction.  This value is a <see cref="ZedGraph.AlignV"/> enumeration.
    /// This field only applies if <see cref="IsScaled"/> is false.
    /// properties.
    /// </summary>
    /// <seealso cref="AlignH"/>
    /// <seealso cref="AlignV"/>
    AlignV::AlignV		_alignV;



    double	_rangeMin;
    double	_rangeMax;
    double _rangeDefault;


    QBitmap*	_gradientBM;

    /// <summary>
    /// Private field that saves the image passed to the constructor.
    /// This is used strictly for serialization.
    /// </summary>
    //QImage*	_image;


    /// <summary>
    /// Private field that saves the image wrapmode passed to the constructor.
    /// This is used strictly for serialization.
    /// </summary>
    //WrapMode _wrapMode; TODO: Search Enum implementation on QT or make implementation


    /// <summary>
    /// Private field that saves the list of colors used to create the
    /// <see cref="LinearGradientBrush"/> in the constructor.  This is used strictly
    /// for serialization.
    /// </summary>
    //QColor[] _colorList; O


    /// <summary>
    /// Private field that saves the list of positions used to create the
    /// <see cref="LinearGradientBrush"/> in the constructor.  This is used strictly
    /// for serialization.
    /// </summary>
    //float[] _positionList;


    /// <summary>
    /// Private field the saves the angle of the fill.  This is used strictly for serialization.
    /// </summary>
    //float _angle;


    void Init();

    QBrush* MakeBrush( QRectF* rect, PointPair* dataValue );


public:
    Fill();
    Fill( const QColor& color, QBrush* brush, FillType::FillType type );
    Fill( const QColor& color );
    Fill( const QColor& color1,const QColor& color2 );

    FillType::FillType type() const;
    void setType(const FillType::FillType &type);


    void Draw( QPainter* g, QRectF* rect, PointPair* pt );

    void Draw( QPainter* g, QRectF* rect );
};

}

#endif // FILL_H
