TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sensors.cpp \
    emergency.cpp \
    sensorgroup.cpp \
    smokedetector.cpp \
    toxicgasdetector.cpp \
    motiondetector.cpp

HEADERS += \
    sensors.h \
    emergency.h \
    sensorinterface.h \
    sensorgroup.h \
    smokedetector.h \
    motiondetector.h \
    toxicgasdetector.h
