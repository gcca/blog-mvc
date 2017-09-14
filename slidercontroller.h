#ifndef SLIDERCONTROLLER_H
#define SLIDERCONTROLLER_H

#include "sliderview.h"
#include "temperaturemodel.h"

#include <QObject>

class SliderController : public QObject
{
  Q_OBJECT
public:
  SliderController(TemperatureModel &model, SliderView &view);
private:
  TemperatureModel &model;
  SliderView &view;
};

#endif
