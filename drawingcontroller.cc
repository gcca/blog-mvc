#include "drawingcontroller.h"

#include <QPainter>

DrawingController::DrawingController(TemperatureModel &model, DrawingView &view)
  : QObject(), model(model), view(view)
{
  connect(&model, &TemperatureModel::changed, &view, &DrawingView::change);
}
