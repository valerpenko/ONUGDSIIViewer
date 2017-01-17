/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinDataTypeReader.cpp
 * Author: Val
 * 
 * Created on 2 января 2017 г., 17:11
 */

#include "BinDataTypeFileReader.h"
#include "AnError.h"

BinDataTypeFileReader::BinDataTypeFileReader() {
}

BinDataTypeFileReader::BinDataTypeFileReader(const BinDataTypeFileReader& orig) {
}

BinDataTypeFileReader::~BinDataTypeFileReader() {
}

short BinDataTypeFileReader::_2ByteInteger()
{
    throw AnError();
}
double BinDataTypeFileReader::_8ByteReal()
{
    throw AnError();
}
