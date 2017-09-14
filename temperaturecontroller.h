#ifndef TEMPERATURECONTROLLER_H
#define TEMPERATURECONTROLLER_H

#include "temperaturemodel.h"
#include "temperatureview.h"

#include <QString>
#include <QObject>

class TemperatureController : public QObject
{
  Q_OBJECT
public:
  TemperatureController(TemperatureModel &model, TemperatureView &view);
signals:
  void changed(QString temperature);
public slots:
  void change(double temperature);
  void down();
  void up();
  void update(QString temperature);
protected:
  TemperatureModel &model;
  TemperatureView &view;
};

#endif
