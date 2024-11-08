#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Vehiculo {
private:
    int _serie{0};

public:
    // Constructor de la clase base
    Vehiculo(int serie) : _serie{serie} {}

    virtual void desplazarse(){
        cout<< "Vehiculo desplazandose "<<endl;
    }
};

class Coche : public Vehiculo {
private:
    int _marca;

public:
    Coche(int serie, int marca) : Vehiculo(serie) {
        _marca = marca;
    }

    void desplazarse() {
        cout << "El coche se desplaza por carretera." << endl;
    }
};


class Bicicleta : public Vehiculo {
private:
    int _marca;

public:
    Bicicleta(int serie, int marca) : Vehiculo(serie), _marca(marca) {}

    void desplazarse() {
        cout << "La bicicleta se desplaza por senderos y ciclovías." << endl;
    }
};

class Avion : public Vehiculo {
private:
    int _marca; 

public:
    Avion(int serie, const int marca) : Vehiculo(serie), _marca(marca) {}

    void desplazarse() {
        cout << "El avión se desplaza por el aire." << endl;
    }
};

int main() {
    vector<Vehiculo*> vehiculos = {
        new Coche(123, 0000),
        new Bicicleta(456, 0001),
        new Avion(789, 2020)
    };

    for (Vehiculo* vehiculo : vehiculos) {
        vehiculo->desplazarse();
    }
}