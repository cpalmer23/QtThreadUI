include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)

QT -= gui

TARGET = cm-lib
TEMPLATE = lib
DEFINES += CMLIB_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    mastercontroller.cpp

HEADERS += \
    cm-lib_global.h \
    client.h \
    mastercontroller.h \
    navigation-controller.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target


DESTDIR = $$PWD/../binaries/$$DESTINATION_PATH
OBJECTS_DIR = $$PWD/build/$$DESTINATION_PATH/.obj
MOC_DIR = $$PWD/build/$$DESTINATION_PATH/.moc
RCC_DIR = $$PWD/build/$$DESTINATION_PATH/.qrc
UI_DIR = $$PWD/build/$$DESTINATION_PATH/.ui


!build_pass:message(cm-lib project dir: $${PWD})
message (cm-lib output dir: $${DESTDIR})
