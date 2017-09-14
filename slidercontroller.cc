#include "slidercontroller.h"

SliderController::SliderController(TemperatureModel &model, SliderView &view)
  : QObject(), model(model), view(view)
{
  connect(&model, &TemperatureModel::changed, &view, &SliderView::setValue);
  connect(&view, &QSlider::valueChanged, &model, &TemperatureModel::change);
}
