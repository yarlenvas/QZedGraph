#include "pointpairlist.h"

//QZedGraph Namespace
namespace QZedGraph
{


PointPairList::PointPairList()
{

    this->_sorted = false;



}

PointPairList::PointPairList(std::vector<double> *x, std::vector<double> *y)
{

    Add( x, y );
    _sorted = false;

}


void PointPairList::Add(std::vector<double> *x, std::vector<double> *y)
{

    unsigned int len = 0;

    if ( x != NULL )
    {
        len = x->size();
    }
    if ( y != NULL && y->size() > len )
    {
        len = y->size();
    }

    for (unsigned int i=0; i<len; i++ )
    {
        PointPair*	point = new PointPair( 0, 0,0 );
        if ( x == NULL )
        {
            point->X = (double) i + 1.0;
        }
        else if ( i < x->size() )
        {
            point->X = x->at(i);
        }
        else
        {
            point->X = PointPair::Missing;
        }
        if ( y == NULL )
        {
            point->Y = (double) i + 1.0;
        }
        else if ( i < y->size() )
        {
            point->Y = y->at(i);
        }
        else
        {
            point->Y = PointPair::Missing;
        }

        this->append(point);
    }

    _sorted = false;

}

void PointPairList::Add(double x, double y)
{

    _sorted = false;
    PointPair*	point = new PointPair( x, y );
    this->append(point);

}


}


