#ifndef _DATA_H
#define _DATA_H
#include <vector>
#include "stdint.h"
#include "stdio.h"
class data
{
    std::vector<uint8_t> *feature_vector;  
    uint8_t label;
    int enum_label; 
    double distance;
    public:
    data();
    ~data();
    void set_feature_vector(std::vector<uint8_t> * vect);
    void append_to_feature_vector(uint8_t val);
    void set_label(uint8_t val);
    void set_enumrated_label(int val);
    void set_distance(double val);

    int get_feature_size();
    uint8_t get_label();
    uint8_t get_enumerated_label();
    std::vector<uint8_t> * get_feature_vector();

};

#endif