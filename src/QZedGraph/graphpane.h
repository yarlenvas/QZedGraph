#ifndef GRAPHPANE_H
#define GRAPHPANE_H



#include <panebase.h>
#include <qzedenums.h>
#include <vector>
#include <lineitem.h>
#include <xaxis.h>
#include <x2axis.h>
#include <yaxislist.h>
#include <chart.h>
//QZedGraph Namespace
namespace QZedGraph
{



using namespace std;


class CurveList;


class GraphPane : public PaneBase
{
private:

    CurveList* _curveList;

    bool _isIgnoreInitial;
    bool _isBoundedRanges;

    XAxis* _xAxis;

    X2Axis* _x2Axis;

    YAxisList* _yAxisList;

    Chart* _chart;

//YAxisList _yAxisList;

//Y2AxisList _y2AxisList;


    void PickScale( QPainter* g, float scaleFactor );




public:


    ///**CONSTRUCTORS**///

    GraphPane();
    GraphPane(QRectF* rect,const QString& title,const QString& xTitle, const  QString& yTitle );

    LineItem* AddCurve(const QString& label, vector<double>& x,
                  vector<double>& y, const QColor& color,
                  SymbolType::SymbolType symbolType);


    ///***METHODS***///

    void AxisChange(QPainter* g);

    void Draw(QPainter* g);


    CurveList *curveList() const;
    XAxis *xAxis() const;
    void setXAxis(XAxis *xAxis);
    X2Axis *x2Axis() const;
    void setX2Axis(X2Axis *x2Axis);

    float CalcScaleFactor();


};

}



#endif // GRAPHPANE_H
