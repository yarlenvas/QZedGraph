#ifndef ZEDGRAPHCONTROL_H
#define ZEDGRAPHCONTROL_H

#include <QWidget>
#include <graphpane.h>

//QZedGraph Namespace
namespace QZedGraph
{
class ZedGraphControl : public QWidget
{
    Q_OBJECT

private:
    bool _isShowPointValues;

    GraphPane* _graphPane;

protected:
    void paintEvent(QPaintEvent* pe);


public:
    explicit ZedGraphControl(QWidget *parent = 0);

    bool isShowPointValues() const;
    void setIsShowPointValues(bool isShowPointValues);

    GraphPane *graphPane() const;
    void setGraphPane(GraphPane *graphPane);

    void AxisChange();

    void Invalidate();



signals:

public slots:
};

}



#endif // ZEDGRAPHCONTROL_H
