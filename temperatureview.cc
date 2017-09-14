#include "temperatureview.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

TemperatureView::TemperatureView() : QWidget()
{
  QVBoxLayout *layout = new QVBoxLayout(this);

  QLabel *label = new QLabel("Temperature");
  layout->addWidget(label);

  QLineEdit *lineEdit = new QLineEdit();
  connect(this, &TemperatureView::changed, lineEdit, &QLineEdit::setText);
  connect(lineEdit, &QLineEdit::textChanged, this, &TemperatureView::changed);
  layout->addWidget(lineEdit);

  QPushButton *lowerButton = new QPushButton("-");
  QPushButton *raiseButton = new QPushButton("+");
  lowerButton->setAutoRepeat(true);
  raiseButton->setAutoRepeat(true);
  connect(lowerButton, &QPushButton::clicked, this, &TemperatureView::lower);
  connect(raiseButton, &QPushButton::clicked, this, &TemperatureView::raise);

  QHBoxLayout *buttonsLayout = new QHBoxLayout();
  buttonsLayout->addWidget(raiseButton);
  buttonsLayout->addWidget(lowerButton);

  layout->addLayout(buttonsLayout);
  setGeometry(90, 140, 188, 95);
}

void TemperatureView::change(QString temperature)
{
  emit changed(temperature);
}
