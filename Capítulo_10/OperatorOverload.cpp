#include <iostream>
#include "SolPeruano.h"

int main(){
    SolPeruano p1(14,51);
    SolPeruano p2(6,84);

    p1.print();
    p2.print();

    SolPeruano tmp{p1 + p2};
    tmp.print();


    return 0;
}