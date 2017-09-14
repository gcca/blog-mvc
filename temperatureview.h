#ifndef TEMPERATUREVIEW_H
#define TEMPERATUREVIEW_H

#include <QString>
#include <QWidget>

class TemperatureView : public QWidget
{
  Q_OBJECT
public:
  TemperatureView();
signals:
  void raise();
  void lower();
  void changed(QString temperature);
public slots:
  void change(QString temperature);
};

#endif
