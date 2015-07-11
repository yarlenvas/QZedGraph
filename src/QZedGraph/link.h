#ifndef LINK_H
#define LINK_H

#include <QString>
#include <QObject>
//QZedGraph Namespace
namespace QZedGraph
{
class Link
{

private:

    /// <summary>
    /// Internal field that stores the title string for this link.
    /// </summary>
    QString* _title;

    /// <summary>
    /// Internal field that stores the url string for this link
    /// </summary>
    QString* _url;

    /// <summary>
    /// Internal field that stores the target string for this link
    /// </summary>
    QString* _target;

    /// <summary>
    /// Internal field that determines if this link is "live".
    /// </summary>
    bool _isEnabled;

public:


    QObject* Tag;
    Link();

    Link(const QString& title, const QString& url, const QString& target );

};

}




#endif // LINK_H
