#include "curveitem.h"



//QZedGraph Namespace
namespace QZedGraph
{

void CurveItem::Init(QString label)
{
    _label = new Label( label, NULL );
    _isY2Axis = false;
    _isX2Axis = false;
    _isVisible = true;
    _isOverrideOrdinal = false;
    this->Tag = NULL;
    _yAxisIndex = 0;
    _link = new Link();
}

CurveItem::CurveItem()
{

}

CurveItem::CurveItem(QString label, PointPairList *points)
{

    Init( label );

    if ( points == NULL )
    {
        _points = new PointPairList();
    }
    else
    {
        _points = points;
    }

}

void CurveItem::AddPoint(double x, double y)
{

    this->AddPoint( new PointPair( x, y ) );

}

void CurveItem::AddPoint(PointPair *point)
{
    if ( _points == NULL )
    {
        this->_points = new PointPairList();
    }


    _points->append(point);
}
}

