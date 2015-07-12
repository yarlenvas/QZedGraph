#include "label.h"

namespace QZedGraph
{



QFont* Label::fontSpec() const
{
    return _fontSpec;
}

void Label::setFontSpec(QFont* fontSpec)
{
    _fontSpec = fontSpec;
}
Label::Label()
{

}

Label::Label(const QString& text, QString fontFamily, int fontSize, QColor* color, bool isBold, bool isItalic, bool isUnderline)
{

    _text = ( text  == NULL ) ? new QString() : new QString(text);

    _fontSpec = new QFont(fontFamily, fontSize, -1, isItalic);//new FontSpec( fontFamily, fontSize, color, isBold, isItalic, isUnderline );
    _fontSpec->setBold(isBold);
    _fontSpec->setUnderline(isUnderline);
    _color = color;
    _isVisible = true;


}

Label::Label(const QString& text, QFont *fontSpec)
{
    _text = (text == NULL) ? new QString() : new QString(text);

    _fontSpec = fontSpec;

    _isVisible = true;

}


bool Label::isVisible() const
{
    return _isVisible;
}

void Label::setIsVisible(bool isVisible)
{
    _isVisible = isVisible;
}




QString* Label::Text()
{

    return this->_text;
}

void Label::Text(const QString& value)
{

    this->_text = new QString(value);
}

}



