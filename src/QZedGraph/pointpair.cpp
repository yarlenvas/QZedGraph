#include "pointpair.h"

//QZedGraph Namespace
namespace QZedGraph
{
PointPair::PointPair()
{


}

PointPair::PointPair(double x, double y, double z, QObject *tag):PointPairBase(x,y)
{
    this->Z = z;
    this->Tag = tag;

}

QString PointPair::ToString(QString format, bool isShowZ)
{


    //TODO: use the format parameter

    QString result = "("+ QString::number(this->X) + ", "+ QString::number(this->Y);

    if(isShowZ == true)
    {

        result.append(", "+ QString::number(this->Z));
    }

    result.append(" )");

    return result;

}

PointPair::~PointPair()
{
    delete this->Tag;

}

}



