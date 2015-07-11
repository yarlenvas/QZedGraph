#ifndef MAJORTIC_H
#define MAJORTIC_H

#include <minortic.h>


//QZedGraph Namespace
namespace QZedGraph
{
class MajorTic : public MinorTic
{
private:
    bool _isBetweenLabels;

public:
    MajorTic();
};

}



#endif // MAJORTIC_H
