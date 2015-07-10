#ifndef MARGIN_H
#define MARGIN_H


namespace QZedGraph
{
///Class that handles that stores the margin properties for the GraphPane
class Margin
{

private:

    /// <summary>
    /// Private fields that store the size of the margin around the edge of the pane which will be
    /// kept blank.  Use the public properties <see cref="Margin.Left"/>, <see cref="Margin.Right"/>,
    /// <see cref="Margin.Top"/>, <see cref="Margin.Bottom"/> to access these values.
    /// </summary>
    /// <value>Units are points (1/72 inch)</value>
    float	_left;
    float   _right;
    float   _top;
    float   _bottom;

public:
    Margin();
    float left() const;
    void setLeft(float left);
    float right() const;
    void setRight(float right);
    float top() const;
    void setTop(float top);
    float bottom() const;
    void setBottom(float bottom);
};


}


#endif // MARGIN_H
