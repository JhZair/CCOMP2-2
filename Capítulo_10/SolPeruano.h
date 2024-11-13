#ifndef __SOLPERUANO__
#define __SOLPERUANO__

#include <iostream>

class SolPeruano{
    int soles;
    int centimos;
public:
    SolPeruano(int soles = 0, int centimos = 0){
        this->soles = soles;
        this->centimos = centimos;
    }
    
    int getSoles()const {return soles;}
    int getCentimos()const {return centimos;}
    void setSoles(int soles) {this->soles = soles;}
    void setCentimos(int centimos) {this->centimos = centimos;}
    void print() const {
        std::cout << "S/" << soles << "." << centimos << std::endl;
    }
    SolPeruano operator+(const SolPeruano &s)const{
        SolPeruano tmp;
        tmp.soles = soles + s.soles;
        tmp.centimos = centimos + s.centimos;
        if(centimos >= 100){
            tmp.soles++;
            tmp.centimos -= 100;
        }
        return tmp;
    }
};
#endif