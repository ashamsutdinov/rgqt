#-------------------------------------------------
#
# Project created by QtCreator 2018-03-20T22:16:11
#
#-------------------------------------------------

QT       -= gui

TARGET = RGQtCore
TEMPLATE = lib

DEFINES += RGQTCORE_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
        rgqtcore_global.h \ 
    rgqtcore.h \
    rgqtobject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

QMAKE_EXTRA_TARGETS += before_build makefilehook

makefilehook.target = $(MAKEFILE)
makefilehook.depends = .beforebuild

PRE_TARGETDEPS += .beforebuild

before_build.target = .beforebuild
before_build.depends = FORCE
before_build.commands = chcp 1251

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/./release/ -lRGQtCore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/./debug/ -lRGQtCore
else:unix: LIBS += -L$$OUT_PWD/./ -lRGQtCore

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

SOURCES += \
    rgqtobject.cpp
