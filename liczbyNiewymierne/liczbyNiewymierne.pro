TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    irrational.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    irrational.h

