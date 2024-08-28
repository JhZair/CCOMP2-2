#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main() {
    // Este programa calcula el producto de tres enteros

    // Declarar las variables x, y, z y result de tipo int e inicializarlas a 0
    int x = 0;
    int y = 0;
    int z = 0;
    int resultado = 0;

    // Solicitar al usuario que ingrese tres enteros
    cout << "Ingresa tres enteros: ";

    // Leer tres enteros desde el teclado y almacenarlos en las variables x, y y z
    cin >> x >> y >> z;

    // Calcular el producto de los tres enteros contenidos en las variables x, y y z
    resultado = x * y * z;

    // Imprimir "The product is " seguido del valor de la variable result
    cout << "The product is " << resultado << endl;

    // Devolver un valor desde la función main indicando que el programa terminó correctamente
    return 0;
}
