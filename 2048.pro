TEMPLATE = app

QT += qml quick

CONFIG += c++11

SOURCES += main.cpp \
    play2048.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    types.h \
    play2048.h
