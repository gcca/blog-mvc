#ifndef DRAWINGVIEW_H
#define DRAWINGVIEW_H

#include "temperaturemodel.h"

#include <QWidget>

class DrawingView : public QWidget
{
  Q_OBJECT
public:
  DrawingView();
public slots:
  void change(double temperature);
private:
  void paintEvent(QPaintEvent*);
  double _temperature;
};

#endif
