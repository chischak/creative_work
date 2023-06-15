QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    commis.cpp \
    rebro.cpp \
    oglwidget.cpp \
    main.cpp \
    commisvoyageur.cpp \
    vershina.cpp

HEADERS += \
    commis.h \
    rebro.h \
    oglwidget.h \
    commisvoyageur.h \
    vershina.h

FORMS += \
    commis.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
