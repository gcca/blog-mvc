#include "sliderview.h"

#include <QDebug>

SliderView::SliderView() : QSlider(Qt::Horizontal)
{
  setMaximum(100);
  setMinimum(0);
  setGeometry(90, 80, 270, 30);
}
