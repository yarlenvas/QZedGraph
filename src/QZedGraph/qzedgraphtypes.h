#ifndef QZEDGRAPHTYPES_H
#define QZEDGRAPHTYPES_H

namespace QZedTypes {
enum AxisType
{

        //An ordinary, cartesian axis
        Linear,
        //A base 10 log axis
        Log,
        //A cartesian axis with calendar dates or times
        Date,
        /// <summary> An ordinal axis with user-defined text labels.  An ordinal axis means that
        /// all data points are evenly spaced at integral values, and the actual coordinate values
        /// for points corresponding to that axis are ignored.  That is, if the X axis is an
        /// ordinal type, then all X values associated with the curves are ignored.</summary>
        /// <seealso cref="AxisType.Ordinal"/>
        /// <seealso cref="Scale.IsText"/>
        /// <seealso cref="ZedGraph.Scale.Default.MaxTextLabels"/>
        Text,
        /// <summary> An ordinal axis with regular numeric labels.  An ordinal axis means that
        /// all data points are evenly spaced at integral values, and the actual coordinate values
        /// for points corresponding to that axis are ignored.  That is, if the X axis is an
        /// ordinal type, then all X values associated with the curves are ignored. </summary>
        /// <seealso cref="AxisType.Text"/>
        /// <seealso cref="Scale.IsOrdinal"/>
        Ordinal,
        /// <summary> An ordinal axis that will have labels formatted with ordinal values corresponding
        /// to the number of values in each <see cref="CurveItem" />.
        /// </summary>
        /// <remarks>
        /// The <see cref="CurveItem" /> data points will be evenly-spaced at ordinal locations, and the
        /// actual data values are ignored. </remarks>
        /// <seealso cref="AxisType.Text"/>
        /// <seealso cref="Scale.IsOrdinal"/>
        DateAsOrdinal,
        /// <summary> An ordinal axis that will have labels formatted with values from the actual data
        /// values of the first <see cref="CurveItem" /> in the <see cref="CurveList" />.
        /// </summary>
        /// <remarks>
        /// Although the tics are labeled with real data values, the actual points will be
        /// evenly-spaced in spite of the data values.  For example, if the X values of the first curve
        /// are 1, 5, and 100, then the tic labels will show 1, 5, and 100, but they will be equal
        /// distance from each other. </remarks>
        /// <seealso cref="AxisType.Text"/>
        /// <seealso cref="Scale.IsOrdinal"/>
        LinearAsOrdinal,
        /// <summary> An exponential axis </summary>
        Exponent


};

}


#endif // QZEDGRAPHTYPES_H
