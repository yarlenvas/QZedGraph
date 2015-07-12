#ifndef PANEBASE_H
#define PANEBASE_H

#include <gaplabel.h>

namespace QZedGraph
{

class PaneBase
{

protected:
    GapLabel* _title;
public:
    PaneBase();
    GapLabel *title() const;
    void setTitle(GapLabel *title);
    void setTitle(const QString& value);
};

}

#endif // PANEBASE_H
