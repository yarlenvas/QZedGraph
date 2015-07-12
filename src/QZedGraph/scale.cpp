#include "scale.h"
#include <graphpane.h>
#include <limits>
#include <cmath>

//QZedGraph Namespace
namespace QZedGraph
{
Scale::Scale()
{

}


//TODO: review unused parameters
void Scale::PickScale(GraphPane *pane, QPainter* g, float& scaleFactor)
{
    double minVal = _rangeMin;
    double maxVal = _rangeMax;
    double infinity = std::numeric_limits<double>::infinity();
    double nan = std::numeric_limits<double>::quiet_NaN();
    double max = std::numeric_limits<double>::max();

    // Make sure that minVal and maxVal are legitimate values
    if ( minVal == infinity || minVal == nan || minVal == max )
    {
        minVal = 0.0;
    }

    if ( maxVal == infinity || maxVal == nan || maxVal == max )
    {
        maxVal = 0.0;
    }

    // if the scales are autoranged, use the actual data values for the range
    double range = maxVal - minVal;

    // "Grace" is applied to the numeric axis types only
    bool numType = true;//!this.IsAnyOrdinal; TODO: Implements based on IsAnyOrdinal, like un commented sentence


    //TODO: implements for autogenerated values
    // For autoranged values, assign the value.  If appropriate, adjust the value by the
    // "Grace" value.
//    if ( _minAuto )
//    {
//        _min = minVal;
//        // Do not let the grace value extend the axis below zero when all the values were positive
//        if ( numType && ( _min < 0 || minVal - _minGrace * range >= 0.0 ) )
//        {
//            _min = minVal - _minGrace * range;
//        }
//    }


    if ( _maxAuto )
    {
        _max = maxVal;
        // Do not let the grace value extend the axis above zero when all the values were negative
        if ( numType && ( _max > 0 || maxVal + _maxGrace * range <= 0.0 ) )
        {
            _max = maxVal + _maxGrace * range;
        }
    }

    if ( _max == _min && _maxAuto && _minAuto )
    {
        if ( std::abs( _max ) > 1e-100 )
        {
            _max *= ( _min < 0 ? 0.95 : 1.05 );
            _min *= ( _min < 0 ? 1.05 : 0.95 );
        }
        else
        {
            _max = 1.0;
            _min = -1.0;
        }
    }

    if ( _max <= _min )
    {
        if ( _maxAuto )
        {
            _max = _min + 1.0;
        }
        else if ( _minAuto )
        {
            _min = _max - 1.0;
        }
    }

}

}



