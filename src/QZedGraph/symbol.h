#ifndef SYMBOL_H
#define SYMBOL_H


#include <QGraphicsScene>
#include <qzedenums.h>
#include <fill.h>
#include <border.h>

namespace QZedGraph {

class Symbol
{

private:


    float		_size;
    SymbolType::SymbolType	_type;
    bool _isAntiAlias;
    bool		_isVisible;
    Fill*		_fill;
    Border*		_border;
    QGraphicsScene* _userSymbol;


public:
    Symbol();
    Symbol( SymbolType::SymbolType type,const QColor& color );

};

}


#endif // SYMBOL_H
