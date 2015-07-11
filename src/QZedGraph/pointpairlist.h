#ifndef POINTPAIRLIST_H
#define POINTPAIRLIST_H

#include <vector>
#include <pointpair.h>
#include <QList>



//QZedGraph Namespace
namespace QZedGraph
{
class PointPairList : public QList<PointPair*>
{

private:
    bool _sorted;

public:
    PointPairList();
    PointPairList(std::vector<double>* x, std::vector<double>* y);

    void Add(std::vector<double>* x,std::vector<double>* y );
    void Add( double x, double y );


};
}



#endif // POINTPAIRLIST_H
