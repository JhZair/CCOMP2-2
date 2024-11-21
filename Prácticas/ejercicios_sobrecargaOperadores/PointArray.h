#ifndef __POINTARRAY__
#define __POINTARRAY__

#include "Punto.h"

class PointArray{
    Punto* a;
    size_t size;
public:
    PointArray(Punto _a, size_t _size):
    a(&_a),
    size(_size){}
    PointArray(const PointArray &o) {
        a = o.a;
        size = o.size;
    }
    void setPunto(Punto* a) {
        this->a = a;
    }
    void setSize(size_t size) {
        this->size = size;
    } 
    Punto* getPunto() const {
        return this->a;
    }

    size_t getSize() const {
        return size;
    }

    PointArray& operator=(const PointArray& v){
        a = v.a;
        size = v.size;
        return *this;
    }

    bool operator==(const PointArray &v){
        if(size != v.size){
            return false;
        }
    }

    bool operator!=(const PointArray &v){

    }

    void operator[](const PointArray &v){

    }
};

#endif