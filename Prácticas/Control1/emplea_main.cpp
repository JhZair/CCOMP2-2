#include <iostream>
#include "class_emplead.h"

using namespace std;

int main(){
    Empleado e1("Pepe", 27);
    Empleado e2("Juan", 34);

    cout << e1.getEdad()<<endl;
    cout << e2.getNombre()<<endl;

    return 0;
}