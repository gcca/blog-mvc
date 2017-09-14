#include "drawingview.h"

#include <QPainter>

DrawingView::DrawingView() : QWidget()
{
  setGeometry(290, 140, 70, 155);
}

void DrawingView::paintEvent(QPaintEvent*)
{
  QPainter p(this);
  p.setBrush(QBrush(Qt::yellow));
  p.drawEllipse(10, 100, 50, 50);
  p.drawLine(20, 105, 20, 0);
  p.drawLine(50, 105, 50, 0);
  p.setPen(Qt::PenStyle(Qt::NoPen));
  p.drawRect(21, 100 - _temperature, 29, 6 + _temperature);
}

void DrawingView::change(double temperature)
{
  _temperature = temperature;
  update();
}
