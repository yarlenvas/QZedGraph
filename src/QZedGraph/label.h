#ifndef LABEL_H
#define LABEL_H
#include <QString>
#include <QFontInfo>
#include <QColor>

namespace QZedGrap
{

class Label
{
private:

    QString _text;
    QFont* _fontSpec;
    QColor* _color;
    bool _isVisible;


public:
    Label();

    Label( QString text, QString fontFamily, int fontSize, QColor* color, bool isBold,bool isItalic, bool isUnderline);

    Label( Label* rhs );

    QString Text();


    void Text(QString value);


    bool isVisible() const;
    void setIsVisible(bool isVisible);


    QFont* fontSpec() const;
    void setFontSpec(QFont* fontSpec);
};

}



#endif // LABEL_H
