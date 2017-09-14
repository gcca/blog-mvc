#include "temperaturecontroller.h"

TemperatureController::TemperatureController(TemperatureModel &model,
                                             TemperatureView &view)
  : QObject(), model(model), view(view) {
  typedef TemperatureController Controller;
  typedef TemperatureModel Model;
  typedef TemperatureView View;

  connect(&view, &View::changed, this, &Controller::update);
  connect(&view, &View::lower, this, &Controller::down);
  connect(&view, &View::raise, this, &Controller::up);

  connect(&model, &Model::changed, this, &Controller::change);
  connect(this, &Controller::changed, &view, &View::change);
}

void TemperatureController::change(double temperature)
{
  emit changed(QString::number(temperature));
}

void TemperatureController::down()
{
  model.temperature(model.temperature() - 1);
}

void TemperatureController::up()
{
  model.temperature(model.temperature() + 1);
}

void TemperatureController::update(QString temperature)
{
  model.temperature(temperature.toDouble());
}
