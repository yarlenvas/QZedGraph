#ifndef LINE_H
#define LINE_H


#include <linebase.h>
#include <qzedenums.h>


namespace QZedGraph {

class Line : public LineBase
{

private:


    /// <summary>
    /// Private field that stores the smoothing flag for this
    /// <see cref="Line"/>.  Use the public
    /// property <see cref="IsSmooth"/> to access this value.
    /// </summary>
    bool _isSmooth;
    /// <summary>
    /// Private field that stores the smoothing tension
    /// for this <see cref="Line"/>.  Use the public property
    /// <see cref="SmoothTension"/> to access this value.
    /// </summary>
    /// <value>A floating point value indicating the level of smoothing.
    /// 0.0F for no smoothing, 1.0F for lots of smoothing, >1.0 for odd
    /// smoothing.</value>
    /// <seealso cref="IsSmooth"/>
    /// <seealso cref="Default.IsSmooth"/>
    /// <seealso cref="Default.SmoothTension"/>
    float _smoothTension;
    /// <summary>
    /// Private field that stores the <see cref="ZedGraph.StepType"/> for this
    /// <see cref="CurveItem"/>.  Use the public
    /// property <see cref="StepType"/> to access this value.
    /// </summary>
    StepType::StepType _stepType;
    /// <summary>
    /// Private field that stores the <see cref="ZedGraph.Fill"/> data for this
    /// <see cref="Line"/>.  Use the public property <see cref="Fill"/> to
    /// access this value.
    /// </summary>
    Fill* _fill;
    /// <summary>
    /// Private field that determines if this <see cref="Line"/> will be drawn with
    /// optimizations enabled.  Use the public
    /// property <see cref="IsOptimizedDraw"/> to access this value.
    /// </summary>
    bool _isOptimizedDraw;

public:
    Line();

    Line( QColor* color );

};

}



#endif // LINE_H
