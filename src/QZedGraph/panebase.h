#ifndef PANEBASE_H
#define PANEBASE_H

#include <gaplabel.h>

namespace QZedGraph
{

class PaneBase
{

protected:
    GapLabel* _title;
    QRectF* _rect;
    QObject* _tag;
    bool _isFontsScaled;
    float _baseDimension;

public:
    PaneBase();

    PaneBase(const QString& title, QRectF* paneRect );

    GapLabel *title() const;
    void setTitle(GapLabel *title);
    void setTitle(const QString& value);
    float baseDimension() const;
};

}

#endif // PANEBASE_H
