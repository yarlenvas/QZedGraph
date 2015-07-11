#ifndef POINTPAIRBASE_H
#define POINTPAIRBASE_H


#include <QString>

//QZedGraph Namespace
namespace QZedGraph
{
class PointPairBase
{
public:

    /// <summary>
    /// Missing values are represented internally using <see cref="System.Double.MaxValue"/>.
    /// </summary>
    const static double Missing;

    /// <summary>
    /// The default format to be used for displaying point values via the
    /// <see cref="ToString()"/> method.
    /// </summary>
    const QString DefaultFormat;

    /// <summary>
    /// This PointPair's X coordinate
    /// </summary>
    double X;

    /// <summary>
    /// This PointPair's Y coordinate
    /// </summary>
    double Y;


    PointPairBase();

    PointPairBase(double& x, double& y);


};

}



#endif // POINTPAIRBASE_H
