#ifndef SCALE_H
#define SCALE_H

#include <vector>
#include <QString>
#include <qzedenums.h>
#include <QFont>

using namespace std;


//QZedGraph Namespace
namespace QZedGraph
{

class Axis;
class GraphPane;

class Scale
{


protected:

    /// <summary> Private fields for the <see cref="Axis"/> scale definitions.
    /// Use the public properties <see cref="Min"/>, <see cref="Max"/>,
    /// <see cref="MajorStep"/>, <see cref="MinorStep"/>, and <see cref="Exponent" />
    /// for access to these values.
    /// </summary>
    double	_min;
    double	_max;
    double	_majorStep;
    double	_minorStep;
    double	_exponent;
    double	_baseTic;

    /// <summary> Private fields for the <see cref="Axis"/> automatic scaling modes.
    /// Use the public properties <see cref="MinAuto"/>, <see cref="MaxAuto"/>,
    /// <see cref="MajorStepAuto"/>, <see cref="MinorStepAuto"/>,
    /// <see cref="MagAuto"/> and <see cref="FormatAuto"/>
    /// for access to these values.
    /// </summary>
    bool _minAuto;
    bool _maxAuto;
    bool _majorStepAuto;
    bool _minorStepAuto;
    bool _magAuto;
    bool _formatAuto;

    /// <summary> Private fields for the <see cref="Axis"/> "grace" settings.
    /// These values determine how much extra space is left before the first data value
    /// and after the last data value.
    /// Use the public properties <see cref="MinGrace"/> and <see cref="MaxGrace"/>
    /// for access to these values.
    /// </summary>
    double	_minGrace;
    double	_maxGrace;


    /// <summary> Private field for the <see cref="Axis"/> scale value display.
    /// Use the public property <see cref="Mag"/> for access to this value.
    /// </summary>
    int		_mag;

    /// <summary> Private fields for the <see cref="Scale"/> attributes.
    /// Use the public properties <see cref="Scale.IsReverse"/> and <see cref="Scale.IsUseTenPower"/>
    /// for access to these values.
    /// </summary>
    bool _isReverse;
    bool _isPreventLabelOverlap;
    bool _isUseTenPower;
    bool _isLabelsInside;
    bool _isSkipFirstLabel;
    bool _isSkipLastLabel;
    bool _isSkipCrossLabel;
    bool _isVisible;

    /// <summary> Private <see cref="System.Collections.ArrayList"/> field for the <see cref="Axis"/> array of text labels.
    /// This property is only used if <see cref="Type"/> is set to
    /// <see cref="AxisType.Text"/> </summary>
    vector<QString> _textLabels;

    /// <summary> Private field for the format of the <see cref="Axis"/> tic labels.
    /// Use the public property <see cref="Format"/> for access to this value. </summary>
    /// <seealso cref="FormatAuto"/>
    QString	_format;

    /// <summary>
    /// Private fields for Unit types to be used for the major and minor tics.
    /// See <see cref="MajorUnit"/> and <see cref="MinorUnit"/> for the corresponding
    /// public properties.
    /// These types only apply for date-time scales (<see cref="IsDate"/>).
    /// </summary>
    /// <value>The value of these types is of enumeration type <see cref="DateUnit"/>
    /// </value>
    DateUnit::DateUnit	_majorUnit;
    DateUnit::DateUnit _minorUnit;

    /// <summary> Private field for the alignment of the <see cref="Axis"/> tic labels.
    /// This fields controls whether the inside, center, or outside edges of the text labels are aligned.
    /// Use the public property <see cref="Scale.Align"/>
    /// for access to this value. </summary>
    /// <seealso cref="FormatAuto"/>
    AlignP::AlignP _align;

    /// <summary> Private field for the alignment of the <see cref="Axis"/> tic labels.
    /// This fields controls whether the left, center, or right edges of the text labels are aligned.
    /// Use the public property <see cref="Scale.AlignH"/>
    /// for access to this value. </summary>
    /// <seealso cref="FormatAuto"/>
    AlignH::AlignH _alignH;


    /// <summary> Private fields for the <see cref="Axis"/> font specificatios.
    /// Use the public properties <see cref="FontSpec"/> and
    /// <see cref="Scale.FontSpec"/> for access to these values. </summary>
    QFont* _fontSpec;

    /// <summary>
    /// Internal field that stores the amount of space between the scale labels and the
    /// major tics.  Use the public property <see cref="LabelGap" /> to access this
    /// value.
    /// </summary>
    float _labelGap;

    /// <summary>
    /// Data range temporary values, used by GetRange().
    /// </summary>
    double	_rangeMin;
    double _rangeMax;
    double _lBound;
    double _uBound;

    /// <summary>
    /// Pixel positions at the minimum and maximum value for this scale.
    /// These are temporary values used/valid only during the Draw process.
    /// </summary>
    float _minPix;
    float _maxPix;

    /// <summary>
    /// Scale values for calculating transforms.  These are temporary values
    /// used ONLY during the Draw process.
    /// </summary>
    /// <remarks>
    /// These values are just <see cref="Scale.Min" /> and <see cref="Scale.Max" />
    /// for normal linear scales, but for log or exponent scales they will be a
    /// linear representation.  For <see cref="LogScale" />, it is the
    /// <see cref="Math.Log(double)" /> of the value, and for <see cref="ExponentScale" />,
    /// it is the <see cref="Math.Exp(double)" />
    /// of the value.
    /// </remarks>
    double	_minLinTemp;
    double _maxLinTemp;

    /// <summary>
    /// Gets or sets the linearized version of the <see cref="Min" /> scale range.
    /// </summary>
    /// <remarks>
    /// This value is valid at any time, whereas <see cref="_minLinTemp" /> is an optimization
    /// pre-set that is only valid during draw operations.
    /// </remarks>
//    double _minLinearized
//    {
//        get { return Linearize( _min ); }
//        set { _min = DeLinearize( value ); }
//    }

    /// <summary>
    /// Gets or sets the linearized version of the <see cref="Max" /> scale range.
    /// </summary>
    /// <remarks>
    /// This value is valid at any time, whereas <see cref="_maxLinTemp" /> is an optimization
    /// pre-set that is only valid during draw operations.
    /// </remarks>
//    double _maxLinearized
//    {
//        get { return Linearize( _max ); }
//        set { _max = DeLinearize( value ); }
//    }

    /// <summary>
    /// private field that stores the owner Axis that contains this Scale instance.
    /// </summary>
    Axis* _ownerAxis;

public:

    ///**CONSTRUCTORS**///
    Scale();


    virtual void PickScale( GraphPane* pane, QPainter* g, float& scaleFactor );



};

}

#endif // SCALE_H





