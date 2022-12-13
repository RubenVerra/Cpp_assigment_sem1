TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        character.cpp \
        defencepotion.cpp \
        game.cpp \
        healer.cpp \
        healthpotion.cpp \
        knight.cpp \
        main.cpp \
        potion.cpp \
        strengthpotion.cpp \
        wizard.cpp

HEADERS += \
    character.h \
    defencepotion.h \
    game.h \
    healer.h \
    healthpotion.h \
    knight.h \
    potion.h \
    strengthpotion.h \
    wand.h \
    wizard.h
