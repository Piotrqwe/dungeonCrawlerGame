#-------------------------------------------------
#
# Project created by QtCreator 2019-07-28T19:53:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dungeonCrawlerGame
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        Empty.cpp \
        Entity.cpp \
        Game.cpp \
        Item.cpp \
        Location.cpp \
        Map.cpp \
        Maploader.cpp \
        Monster.cpp \
        Player.cpp \
        Room.cpp \
        Stairs.cpp \
        Stats.cpp \
        Tile.cpp \
        entityfactory.cpp \
        entityservice.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        Empty.h \
        Entity.h \
        Game.h \
        Item.h \
        Location.h \
        Map.h \
        Maploader.h \
        Monster.h \
        Player.h \
        Room.h \
        Stairs.h \
        Stats.h \
        Tile.h \
        entityfactory.h \
        entityservice.h \
        mainwindow.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
