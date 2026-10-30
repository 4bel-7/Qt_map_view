QT += widgets

CONFIG += c++17
DEFINES += _USE_MATH_DEFINES

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += "C:/QGIS/msys64_QtQGisAll/worldTiff"
QT += core gui widgets xml svg network sql concurrent printsupport
LIBS += -L"C:/QGIS/msys64_QtQGisAll/mingw64/lib" -lqgis_core -lqgis_gui

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
