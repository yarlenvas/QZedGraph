#ifndef LINEBASEDEFAULTS_H
#define LINEBASEDEFAULTS_H
#include <QPen>

namespace QZedGraph {


class LineBaseDefaults
{
public:
    LineBaseDefaults();

    /// <summary>
    /// The default mode for displaying line segments (<see cref="LineBase.IsVisible"/>
    /// property).  True to show the line segments, false to hide them.
    /// </summary>
    static const bool IsVisible = true;
    /// <summary>
    /// The default width for line segments (<see cref="LineBase.Width"/> property).
    /// Units are points (1/72 inch).
    /// </summary>
    static  const float Width = 1;
    /// <summary>
    /// The default value for the <see cref="LineBase.IsAntiAlias"/>
    /// property.
    /// </summary>
    static const bool IsAntiAlias = false;

    /// <summary>
    /// The default drawing style for line segments (<see cref="LineBase.Style"/> property).
    /// This is defined with the <see cref="DashStyle"/> enumeration.
    /// </summary>
    static const Qt::PenStyle Style;

    /// <summary>
    /// The default "dash on" size for drawing the line
    /// (<see cref="LineBase.DashOn"/> property). Units are in points (1/72 inch).
    /// </summary>
    static const float DashOn;
    /// <summary>
    /// The default "dash off" size for drawing the the line
    /// (<see cref="LineBase.DashOff"/> property). Units are in points (1/72 inch).
    /// </summary>
    static const float DashOff;

};


}



#endif // LINEBASEDEFAULTS_H
