#ifndef CURVEITEM_H
#define CURVEITEM_H
#include <QObject>
#include <label.h>
#include <pointpair.h>
#include <pointpairlist.h>
#include <link.h>


//QZedGraph Namespace
namespace QZedGraph
{
class CurveItem
{


private:

    Label* _label;

    /// <summary>
    /// protected field that stores the boolean value that determines whether this
    /// <see cref="CurveItem"/> is on the bottom X axis or the top X axis (X2).
    /// Use the public property <see cref="IsX2Axis"/> to access this value.
    /// </summary>
    bool _isX2Axis;
    /// <summary>
    /// protected field that stores the boolean value that determines whether this
    /// <see cref="CurveItem"/> is on the left Y axis or the right Y axis (Y2).
    /// Use the public property <see cref="IsY2Axis"/> to access this value.
    /// </summary>
    bool _isY2Axis;

    /// <summary>
    /// protected field that stores the index number of the Y Axis to which this
    /// <see cref="CurveItem" /> belongs.  Use the public property <see cref="YAxisIndex" />
    /// to access this value.
    /// </summary>
    int		_yAxisIndex;

    /// <summary>
    /// protected field that stores the boolean value that determines whether this
    /// <see cref="CurveItem"/> is visible on the graph.
    /// Use the public property <see cref="IsVisible"/> to access this value.
    /// Note that this value turns the curve display on or off, but it does not
    /// affect the display of the legend entry.  To hide the legend entry, you
    /// have to set <see cref="ZedGraph.Label.IsVisible"/> to false.
    /// </summary>
    bool		_isVisible;

    // Revision: JCarpenter 10/06
    /// <summary>
    /// Protected field that stores the boolean value that determines whether this
    /// <see cref="CurveItem"/> is selected on the graph.
    /// Use the public property <see cref="IsSelected"/> to access this value.
    /// Note that this value changes the curve display color, but it does not
    /// affect the display of the legend entry.  To hide the legend entry, you
    /// have to set <see cref="ZedGraph.Label.IsVisible"/> to false.
    /// </summary>
    bool _isSelected;

    // Revision: JCarpenter 10/06
    /// <summary>
    /// Protected field that stores the boolean value that determines whether this
    /// <see cref="CurveItem"/> can be selected in the graph.
    /// </summary>
    bool _isSelectable;

    /// <summary>
    /// protected field that stores a boolean value which allows you to override the normal
    /// ordinal axis behavior.  Use the public property <see cref="IsOverrideOrdinal"/> to
    /// access this value.
    /// </summary>
    bool		_isOverrideOrdinal;

    /// <summary>
    /// The <see cref="IPointList"/> of value sets that
    /// represent this <see cref="CurveItem"/>.
    /// The size of this list determines the number of points that are
    /// plotted.  Note that values defined as
    /// System.Double.MaxValue are considered "missing" values
    /// (see <see cref="PointPairBase.Missing"/>),
    /// and are not plotted.  The curve will have a break at these points
    /// to indicate the values are missing.
    /// </summary>


    /// <summary>
    /// A tag object for use by the user.  This can be used to store additional
    /// information associated with the <see cref="CurveItem"/>.  ZedGraph does
    /// not use this value for any purpose.
    /// </summary>
    /// <remarks>
    /// Note that, if you are going to Serialize ZedGraph data, then any type
    /// that you store in <see cref="Tag"/> must be a serializable type (or
    /// it will cause an exception).
    /// </remarks>


    /// <summary>
    /// Protected field that stores the hyperlink information for this object.
    /// </summary>
    Link* _link;

    void Init(QString label);

protected:
        PointPairList* _points;

public:
    CurveItem();
    CurveItem(QString label, PointPairList *points = NULL);

    QObject* Tag;
    void AddPoint( double x, double y );

    void AddPoint(PointPair* point );



};

}


#endif // CURVEITEM_H
