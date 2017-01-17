/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinDataTypeReader.h
 * Author: Val
 *
 * Created on 2 января 2017 г., 17:11
 */

#ifndef BINDATATYPEREADER_H
#define BINDATATYPEREADER_H
#include "IDataTypeFileReader.h"

class BinDataTypeFileReader : public IDataTypeFileReader
{
public:
    BinDataTypeFileReader();
    BinDataTypeFileReader(const BinDataTypeFileReader& orig);
    ~BinDataTypeFileReader();
    short _2ByteInteger();
    double _8ByteReal();
private:

};

#endif /* BINDATATYPEREADER_H */

