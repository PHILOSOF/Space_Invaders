#-------------------------------------------------
#
# Project created by QtCreator 2017-07-14T17:11:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Space_Inviders
TEMPLATE = app


SOURCES += main.cpp \
    Player.cpp \
    bullet.cpp \
    enemy.cpp \
    spawnenemy.cpp \
    game.cpp \
    score.cpp \
    health.cpp \
    heart.cpp \
    spawnheart.cpp

HEADERS  += \
    Player.h \
    bullet.h \
    globalvariables.h \
    enemy.h \
    spawnenemy.h \
    game.h \
    score.h \
    health.h \
    heart.h \
    spawnheart.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
