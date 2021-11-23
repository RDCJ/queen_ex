TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bfsqueensolver.cpp \
        dfsqueensolver.cpp \
        main.cpp \
        queennode.cpp \
        queensolver.cpp \
        queenstate.cpp

HEADERS += \
    bfsqueensolver.h \
    dfsqueensolver.h \
    queennode.h \
    queensolver.h \
    queenstate.h
