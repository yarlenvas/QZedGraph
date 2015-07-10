#include "label.h"

namespace QZedGrap
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

Label::Label(QString text, QString fontFamily, int fontSize, QColor* color, bool isBold, bool isItalic, bool isUnderline)
{

    _text = ( text  == NULL ) ? QString() : text;

    _fontSpec = new QFont(fontFamily, fontSize, -1, isItalic);//new FontSpec( fontFamily, fontSize, color, isBold, isItalic, isUnderline );
    _fontSpec->setBold(isBold);
    _fontSpec->setUnderline(isUnderline);
    _color = color;
    _isVisible = true;


}


Label::Label(QZedGrap::Label* rhs )
{
    if (rhs->Text() != NULL)
    {
       this->Text(rhs->_text);
    }
    else
    {
        _text = QString();
    }

    this->setIsVisible(rhs->_isVisible);


    if ( rhs->fontSpec() != NULL )
    {
        _fontSpec = rhs->_fontSpec;
    }else
    {
        _fontSpec = NULL;
    }

    if (rhs->_color != NULL)
    {
        this->_color = rhs->_color;

    }else
    {

     this->_color = NULL;
    }

}


bool Label::isVisible() const
{
    return _isVisible;
}

void Label::setIsVisible(bool isVisible)
{
    _isVisible = isVisible;
}




QString Label::Text()
{

    return this->_text;
}

void Label::Text(QString value)
{

    this->_text = value;
}

}



