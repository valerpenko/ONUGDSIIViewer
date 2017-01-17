/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinGDSIIFileReader.cpp
 * Author: Val
 * 
 * Created on 2 января 2017 г., 16:40
 */

#include "BinGDSIIFileReader.h"
#include "AnError.h"

BinGDSIIFileReader::BinGDSIIFileReader() {
}

BinGDSIIFileReader::BinGDSIIFileReader(const BinGDSIIFileReader& orig) {
}

BinGDSIIFileReader::~BinGDSIIFileReader() {
}

short BinGDSIIFileReader::_2ByteInteger()
{
    throw AnError();
}
    
double BinGDSIIFileReader::_8ByteReal()
{
    throw AnError();
}