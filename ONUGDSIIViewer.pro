TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/AnError.cpp \
    src/BinDataTypeFileReader.cpp \
    src/BinGDSIIFileReader.cpp \
    src/GDSIIDesign.cpp \
    src/GDSIIDesignReader.cpp \
    src/GDSIIRecord.cpp \
    src/GUIClient.cpp \
    src/Record00_Header.cpp

HEADERS += \
    src/AnError.h \
    src/BinDataTypeFileReader.h \
    src/BinGDSIIFileReader.h \
    src/GDSIIDesign.h \
    src/GDSIIDesignReader.h \
    src/GDSIIRecord.h \
    src/GUIClient.h \
    src/IDataTypeFileReader.h \
    src/IGDSIIFileReader.h \
    src/Record00_Header.h
