#include <iostream>

using namespace std;

class Empleado{
private:
    string nombre;
    int edad;
public:
    Empleado(string n, int e){
        nombre = n;
        edad = e;
    }
    string getNombre(){
        return nombre;
    }
    int getEdad(){
        return edad;
    }
    void setNombre(string n){
        nombre = n;
    }
    void setEdad(int e){
        edad = e;
    }
};