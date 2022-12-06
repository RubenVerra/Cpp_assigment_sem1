TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        character.cpp \
        healer.cpp \
        knight.cpp \
        main.cpp \
        wizard.cpp

HEADERS += \
    character.h \
    healer.h \
    knight.h \
    wand.h \
    wizard.h
