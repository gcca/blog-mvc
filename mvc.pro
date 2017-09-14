QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mvc
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
  drawingcontroller.cc \
  drawingview.cc \
  main.cc \
  sliderview.cc \
  temperaturecontroller.cc \
  temperaturemodel.cc \
  temperatureview.cc \
  slidercontroller.cc

HEADERS += \
  temperaturemodel.h \
  drawingview.h \
  temperatureview.h \
  sliderview.h \
  temperaturecontroller.h \
  drawingcontroller.h \
  slidercontroller.h
