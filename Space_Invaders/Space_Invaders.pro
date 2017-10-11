#-------------------------------------------------
#
# Project created by QtCreator 2017-07-25T12:47:22
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Space_Invaders
TEMPLATE = app


SOURCES += main.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    health.cpp \
    heart.cpp \
    Player.cpp \
    score.cpp \
    spawnenemy.cpp \
    spawnheart.cpp \
    bang.cpp \
    space.cpp \
    trajectory.cpp \
    zigzag.cpp \
    linear.cpp \
    horizontal.cpp

HEADERS  += \
    bullet.h \
    enemy.h \
    game.h \
    globalvariables.h \
    health.h \
    heart.h \
    Player.h \
    score.h \
    spawnenemy.h \
    spawnheart.h \
    bang.h \
    space.h \
    trajectory.h \
    zigzag.h \
    linear.h \
    horizontal.h

FORMS    +=

RESOURCES += \
    res.qrc

DISTFILES +=
