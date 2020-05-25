QT += widgets serialport
requires(qtConfig(combobox))

TARGET = terminal
TEMPLATE = app
RC_ICONS += icon.ico


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    settingsdialog.cpp \
    console.cpp

HEADERS += \
    mainwindow.h \
    settingsdialog.h \
    console.h

FORMS += \
    mainwindow.ui \
    settingsdialog.ui

RESOURCES += \
    terminal.qrc

target.path = C:\\Users\Admin\Desktop\terminal\terminal
INSTALLS += target
