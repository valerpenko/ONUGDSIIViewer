/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinGDSIIFileReader.h
 * Author: Val
 *
 * Created on 2 января 2017 г., 16:40
 */

#ifndef BINGDSIIFILEREADER_H
#define BINGDSIIFILEREADER_H
#include "IGDSIIFileReader.h"
#include "BinDataTypeFileReader.h"


class BinGDSIIFileReader : public IGDSIIFileReader
{
public:
    BinGDSIIFileReader();
    BinGDSIIFileReader(const BinGDSIIFileReader& orig);
    virtual ~BinGDSIIFileReader();
        
    short _2ByteInteger();
    double _8ByteReal();
private:
    //IDataTypeFileReader typeReader;
    BinDataTypeFileReader typeReader;
    //IGDSIIFileReader typeReader;
};

#endif /* BINGDSIIFILEREADER_H */

