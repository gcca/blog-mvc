#ifndef TEMPERATUREMODEL_H
#define TEMPERATUREMODEL_H

#include <QObject>

class TemperatureModel : public QObject
{
  Q_OBJECT
public:
  double temperature() const;
  void temperature(double temperature);
signals:
  void changed(double temperature);
public slots:
  void change(double temperature);
private:
  double _temperature = -1;
};

#endif
