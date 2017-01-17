/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IDataTypeFileReader.h
 * Author: Val
 *
 * Created on 2 января 2017 г., 16:47
 */

#ifndef IDATATYPEFILEREADER_H
#define IDATATYPEFILEREADER_H

class IDataTypeFileReader {
public:
    virtual short _2ByteInteger()=0;
    virtual double _8ByteReal()=0;
private:

};

#endif /* IDATATYPEFILEREADER_H */

