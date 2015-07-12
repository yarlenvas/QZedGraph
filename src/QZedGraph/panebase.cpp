#include "panebase.h"

//QZedGraph Namespace
namespace QZedGraph
{

GapLabel *PaneBase::title() const
{
    return _title;
}

void PaneBase::setTitle(GapLabel *title)
{
    _title = title;
}

void PaneBase::setTitle(const QString &value)
{
    this->title()->Text(value);
}
PaneBase::PaneBase()
{
    
}


}


