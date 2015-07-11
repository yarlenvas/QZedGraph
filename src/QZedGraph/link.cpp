#include "link.h"

//QZedGraph Namespace
namespace QZedGraph
{

Link::Link()
{

    _title = new QString();
    _url = new QString();
    _target = new QString();
    this->Tag = NULL;
    _isEnabled = false;

}

Link::Link(const QString &title, const QString &url, const QString &target)
{
    _title = new QString(title);
    _url = new QString(url);
    _target = new QString(target);
    Tag = NULL;
    _isEnabled = true;

}



}

