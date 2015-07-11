#ifndef POINTPAIR_H
#define POINTPAIR_H
#include <pointpairbase.h>
#include <QObject>

//QZedGraph Namespace
namespace QZedGraph
{

class PointPair : public PointPairBase
{
public:

    double Z;
    QObject* Tag;


    PointPair();


    PointPair( double x, double y, double z = 0, QObject* tag = NULL );


    virtual QString ToString( QString format, bool isShowZ );


    ~PointPair();

};


}




#endif // POINTPAIR_H
