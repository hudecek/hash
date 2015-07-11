QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra -pedantic -Werror

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    hash_helper.cpp \
    info.cpp \
    crc16.cpp \
    crc32.cpp \
    md5.cpp \
    xor_hash.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    hash_helper.h \
    info.h \
    crc16.h \
    crc32.h \
    md5.h \
    xor_hash.h

