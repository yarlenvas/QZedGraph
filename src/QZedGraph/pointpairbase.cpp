#include "pointpairbase.h"


#include <limits>
//QZedGraph Namespace
namespace QZedGraph
{



PointPairBase::PointPairBase()
{

}

PointPairBase::PointPairBase(double &x, double &y)
{
    this->X = x;
    this->Y = y;

}

const double PointPairBase::Missing = std::numeric_limits<double>::max();

}



