/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IGDSIIFileReader.h
 * Author: Val
 *
 * Created on 2 января 2017 г., 14:56
 */

#ifndef IGDSIIFILEREADER_H
#define IGDSIIFILEREADER_H
#include "GDSIIRecord.h"

class IGDSIIFileReader {
public:
  virtual GDSIIRecord NextRecord() = 0;
  virtual bool HasNextRecord() = 0;
};
#endif /* IGDSIIFILEREADER_H */

