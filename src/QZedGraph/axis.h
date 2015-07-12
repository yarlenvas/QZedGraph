#ifndef AXIS_H
#define AXIS_H

#include <scale.h>
#include <axislabel.h>

//QZedGraph Namespace
namespace QZedGraph
{

class Scale;

class Axis
{

protected:
    Scale* _scale;
    AxisLabel* _title;
    bool _isVisible;

public:
    Axis();
    Axis(const QString& title);
    Scale* scale() const;
    void setScale(Scale *scale);
};


}



#endif // AXIS_H
