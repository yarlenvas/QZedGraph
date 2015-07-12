#ifndef YAXISLIST_H
#define YAXISLIST_H
#include <QList>
#include <yaxis.h>

//QZedGraph Namespace
namespace QZedGraph
{
class YAxisList : public QList<YAxis*>
{
public:
    YAxisList();
};

}



#endif // YAXISLIST_H
