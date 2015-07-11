#include "symbol.h"


namespace QZedGraph {
Symbol::Symbol()
{

}

Symbol::Symbol(SymbolType::SymbolType type, const QColor &color)
{

    _size = 7;
    _type = type;
    _isAntiAlias = false;
    _isVisible = true;
    _border = new Border( true, color, 1.0F );
    _fill = new Fill( color, NULL, FillType::None );
    _userSymbol = NULL;

}
}



