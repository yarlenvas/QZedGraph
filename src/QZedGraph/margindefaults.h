#ifndef MARGINDEFAULTS_H
#define MARGINDEFAULTS_H



namespace QZedGraph {
class MarginDefaults
{


public:
    MarginDefaults();


    /// <summary>
    /// The default value for the <see cref="Margin.Left"/> property, which is
    /// the size of the space on the left side of the <see cref="PaneBase.Rect"/>.
    /// </summary>
    /// <value>Units are points (1/72 inch)</value>
    static const float Left;
    /// <summary>
    /// The default value for the <see cref="Margin.Right"/> property, which is
    /// the size of the space on the right side of the <see cref="PaneBase.Rect"/>.
    /// </summary>
    /// <value>Units are points (1/72 inch)</value>
    static const float Right;
    /// <summary>
    /// The default value for the <see cref="Margin.Top"/> property, which is
    /// the size of the space on the top side of the <see cref="PaneBase.Rect"/>.
    /// </summary>
    /// <value>Units are points (1/72 inch)</value>
    static const float Top ;
    /// <summary>
    /// The default value for the <see cref="Margin.Bottom"/> property, which is
    /// the size of the space on the bottom side of the <see cref="PaneBase.Rect"/>.
    /// </summary>
    /// <value>Units are points (1/72 inch)</value>
    static const float Bottom;
};

}

#endif // MARGINDEFAULTS_H
