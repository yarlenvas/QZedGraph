#include "graphpane.h"
#include <curvelist.h>
//QZedGraph Namespace
namespace QZedGraph
{

XAxis *GraphPane::xAxis() const
{
    return _xAxis;
}

void GraphPane::setXAxis(XAxis *xAxis)
{
    _xAxis = xAxis;
}

X2Axis *GraphPane::x2Axis() const
{
    return _x2Axis;
}

void GraphPane::setX2Axis(X2Axis *x2Axis)
{
    _x2Axis = x2Axis;
}

float GraphPane::CalcScaleFactor()
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
GraphPane::GraphPane()
{

    _curveList = new CurveList();

}

GraphPane::GraphPane(QRectF *rect, const QString &title, const QString &xTitle,
                     const QString &yTitle):PaneBase(title, rect)
{

    _xAxis = new XAxis( xTitle );
    _x2Axis = new X2Axis( "" );

    _yAxisList = new YAxisList();
//    _y2AxisList = new Y2AxisList();

    _yAxisList->append(new YAxis( yTitle ) );
//    _y2AxisList.Add( new Y2Axis( string.Empty ) );

    _curveList = new CurveList();
//    _zoomStack = new ZoomStateStack();

//    _isIgnoreInitial = Default.IsIgnoreInitial;
//    _isBoundedRanges = Default.IsBoundedRanges;
//    _isAlignGrids = false;

    _chart = new Chart();

//    _barSettings = new BarSettings( this );

//    _lineType = Default.LineType;

}


void GraphPane::PickScale(QPainter *g, float scaleFactor)
{

        int maxTics = 0;

        _xAxis->scale()->PickScale( this, g, scaleFactor );
        _x2Axis->scale()->PickScale( this, g, scaleFactor );


       for(unsigned int i = 0; i < _yAxisList->length(); i++)
       {
           Axis* axis = _yAxisList->at(i);
           axis->scale()->PickScale(this,g,scaleFactor);
       }

//        foreach ( Axis axis in _yAxisList )
//        {
//            axis._scale.PickScale( this, g, scaleFactor );
//            if ( axis._scale.MaxAuto )
//            {
//                int nTics = axis._scale.CalcNumTics();
//                maxTics = nTics > maxTics ? nTics : maxTics;
//            }
//        }
//        foreach ( Axis axis in _y2AxisList )
//        {
//            axis._scale.PickScale( this, g, scaleFactor );
//            if ( axis._scale.MaxAuto )
//            {
//                int nTics = axis._scale.CalcNumTics();
//                maxTics = nTics > maxTics ? nTics : maxTics;
//            }
//        }

//        if ( _isAlignGrids )
//        {
//            foreach ( Axis axis in _yAxisList )
//                ForceNumTics( axis, maxTics );

//            foreach ( Axis axis in _y2AxisList )
//                ForceNumTics( axis, maxTics );
//        }


}


CurveList *GraphPane::curveList() const
{
    return _curveList;
}

LineItem* GraphPane::AddCurve(const QString &label, vector<double> &x, vector<double> &y, const QColor &color, SymbolType::SymbolType symbolType)
{

    LineItem* curve = new LineItem( label, x, y, color, symbolType );

    _curveList->append(curve);




    return curve;
}

void GraphPane::AxisChange(QPainter *g)
{


                // Get the scale range of the data (all curves)
                _curveList->GetRange(_isIgnoreInitial, _isBoundedRanges, this );

                // Determine the scale factor
                float scaleFactor = this->CalcScaleFactor();

//                // For pie charts, go ahead and turn off the axis displays if it's only pies
//                if ( this.CurveList.IsPieOnly )
//                {
//                    //don't want to display axis or border if there's only pies
//                    this.XAxis.IsVisible = false;
//                    this.X2Axis.IsVisible = false;
//                    this.YAxis.IsVisible = false;
//                    this.Y2Axis.IsVisible = false;
//                    _chart.Border.IsVisible = false;
//                    //this.Legend.Position = LegendPos.TopCenter;
//                }

//                // Set the ClusterScaleWidth, if needed
//                //_barSettings.CalcClusterScaleWidth();
//                if ( _barSettings._clusterScaleWidthAuto )
//                    _barSettings._clusterScaleWidth = 1.0;

//                // if the ChartRect is not yet determined, then pick a scale based on a default ChartRect
//                // size (using 75% of Rect -- code is in Axis.CalcMaxLabels() )
//                // With the scale picked, call CalcChartRect() so calculate a real ChartRect
//                // then let the scales re-calculate to make sure that the assumption was ok
//                if ( _chart._isRectAuto )
//                {
//                    PickScale( g, scaleFactor );

//                    _chart._rect = CalcChartRect( g );
//                    //this.pieRect = PieItem.CalcPieRect( g, this, scaleFactor, this.chartRect );
//                }

//                // Pick new scales based on the range
                 PickScale( g, scaleFactor );

//                // Set the ClusterScaleWidth, if needed
//                _barSettings.CalcClusterScaleWidth();

//                // Trigger the AxisChangeEvent
//                if ( this.AxisChangeEvent != null )
//                    this.AxisChangeEvent( this );


}

}



