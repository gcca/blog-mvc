#include "temperaturemodel.h"

void TemperatureModel::temperature(double t)
{
  if (_temperature != t)
  {
    _temperature = t;
    emit changed(_temperature);
  }
}

double TemperatureModel::temperature() const
{
  return _temperature;
}

void TemperatureModel::change(double t)
{
  temperature(t);
}
