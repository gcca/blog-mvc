#ifndef DRAWINGCONTROLLER_H
#define DRAWINGCONTROLLER_H

#include "temperaturemodel.h"
#include "drawingview.h"

#include <QObject>

class DrawingController : public QObject
{
  Q_OBJECT
public:
  DrawingController(TemperatureModel &model, DrawingView &view);
private:
  TemperatureModel &model;
  DrawingView &view;
};

#endif
