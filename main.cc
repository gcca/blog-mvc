#include <QApplication>

#include "drawingcontroller.h"
#include "drawingview.h"
#include "sliderview.h"
#include "slidercontroller.h"
#include "temperaturecontroller.h"
#include "temperaturemodel.h"
#include "temperatureview.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  TemperatureModel model;

  TemperatureView temperatureView;
  SliderView sliderView;
  DrawingView drawingView;

  TemperatureController temperatureController(model, temperatureView);
  SliderController sliderController(model, sliderView);
  DrawingController drawingController(model, drawingView);

  temperatureView.show();
  drawingView.show();
  sliderView.show();

  model.temperature(0);

  return a.exec();
}
