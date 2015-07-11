#ifndef LINEBASE_H
#define LINEBASE_H

#include "qzedenums.h"
#include <QPen>
#include "fill.h"


namespace QZedGraph {
class LineBase
{


private:


    /// <summary>
    /// Private field that stores the <see cref="DashStyle"/> for this
    /// line.  Use the public
    /// property <see cref="Style"/> to access this value.
    /// </summary>
    Qt::PenStyle  _style;
    /// <summary>
    /// private field that stores the "Dash On" length for drawing the line.  Use the
    /// public property <see cref="DashOn" /> to access this value.
    /// </summary>
    float _dashOn;
    /// <summary>
    /// private field that stores the "Dash Off" length for drawing the line.  Use the
    /// public property <see cref="DashOff" /> to access this value.
    /// </summary>
    float _dashOff;


    /// <summary>
    /// private field that determines if the line is drawn using
    /// Anti-Aliasing capabilities from the <see cref="Graphics" /> class.
    /// Use the public property <see cref="IsAntiAlias" /> to access
    /// this value.
    /// </summary>
    bool _isAntiAlias;


    /// <summary>
    /// Internal field that stores a custom <see cref="Fill" /> class.  This
    /// fill is used strictly for <see cref="FillType.GradientByX" />,
    /// <see cref="FillType.GradientByY" />, <see cref="FillType.GradientByZ" />,
    /// and <see cref="FillType.GradientByColorValue" /> calculations to determine
    /// the color of the line.
    /// </summary>
    Fill* _gradientFill;



protected:

    /// <summary>
    /// Private field that stores the color of this line.  Use the public
    /// property <see cref="Color"/> to access this value.  If this value is
    /// false, the line will not be shown (but the <see cref="Symbol"/> may
    /// still be shown).
    /// </summary>
    QColor* _color;
    float _width;
    bool _isVisible;
    void Init();

public:
    LineBase();
    LineBase(const QColor& Color);
};

}

#endif // LINEBASE_H
