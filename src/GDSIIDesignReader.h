/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GDSIIDesignReader.h
 * Author: Val
 *
 * Created on 2 января 2017 г., 18:40
 */

#ifndef GDSIIDESIGNREADER_H
#define GDSIIDESIGNREADER_H
#include "GDSIIDesign.h"

class GDSIIDesignReader {
public:
    GDSIIDesignReader();
    GDSIIDesignReader(const GDSIIDesignReader& orig);
    virtual ~GDSIIDesignReader();
    
    GDSIIDesign MakeModel();
private:

};

#endif /* GDSIIDESIGNREADER_H */

