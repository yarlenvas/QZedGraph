#include "panebase.h"

//QZedGraph Namespace
namespace QZedGraph
{

GapLabel *PaneBase::title() const
{
}

void PaneBase::setTitle(GapLabel *title)
{
    _title = title;
}

void PaneBase::setTitle(const QString &value)
{
    this->title()->setText(new QString(value));
}

float PaneBase::baseDimension() const
{
    return _baseDimension;
}
PaneBase::PaneBase()
{
    
}

PaneBase::PaneBase(const QString &title, QRectF *paneRect)
{

    _rect = paneRect;


    //TODO: Implementes commented functionality
    //_legend = new Legend();

    _baseDimension = 8.0F;
    //_margin = new Margin();
    //_titleGap = Default.TitleGap;

    //_isFontsScaled = Default.IsFontsScaled;
    //_isPenWidthScaled = Default.IsPenWidthScaled;
    //_fill = new Fill( Default.FillColor );
    //_border = new Border( Default.IsBorderVisible, Default.BorderColor,
      //  Default.BorderPenWidth );

    //_title = new GapLabel( title, Default.FontFamily,
    //    Default.FontSize, Default.FontColor, Default.FontBold,
    //    Default.FontItalic, Default.FontUnderline );
    //_title._fontSpec.Fill.IsVisible = false;
    //_title._fontSpec.Border.IsVisible = false;

    //_graphObjList = new GraphObjList();

    _tag = NULL;

}


}


