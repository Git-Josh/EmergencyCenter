TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sensorgroup.cpp \
    smokedetector.cpp \
    toxicgasdetector.cpp \
    motiondetector.cpp \
    sensor.cpp \
    firebrigade.cpp \
    evacuation.cpp \
    policesquad.cpp

HEADERS += \
    emergency.h \
    sensorinterface.h \
    sensorgroup.h \
    smokedetector.h \
    motiondetector.h \
    toxicgasdetector.h \
    sensor.h \
    emergency.h \
    firebrigade.h \
    evacuation.h \
    policesquad.h
