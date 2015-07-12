#ifndef CHART_H
#define CHART_H

#include <QRectF>
#include <fill.h>
#include <border.h>

//QZedGraph Namespace
namespace QZedGraph
{

class Chart
{

protected:

    /// <summary>
    /// The rectangle that contains the area bounded by the axes, in pixel units
    /// </summary>
    QRectF* _rect;

    /// <summary>
    /// Private field that stores the <see cref="ZedGraph.Fill"/> data for this
    /// <see cref="Chart"/>.  Use the public property <see cref="Fill"/> to
    /// access this value.
    /// </summary>
    Fill* _fill;

    /// <summary>
    /// Private field that stores the <see cref="ZedGraph.Border"/> data for this
    /// <see cref="Chart"/>.  Use the public property <see cref="Border"/> to
    /// access this value.
    /// </summary>
    Border* _border;

    /// <summary>Private field that determines if the <see cref="Rect"/> will be
    /// sized automatically.  Use the public property <see cref="IsRectAuto"/> to access
    /// this value. </summary>
    bool _isRectAuto;

public:
    Chart();
};

}



#endif // CHART_H
