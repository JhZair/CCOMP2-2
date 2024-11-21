#include <iostream>
#include "ejer.h"
#include "ejer1.h"

int main() {
    Point p1(1, 2), p2(3, 4), p3(5, 6);
    Point arr[] = {p1, p2};

    PointArray pa(arr, 2);

    // Añadiendo un nuevo punto
    pa.pushBack(p3);

    // Mostrando el contenido del arreglo
    cout << "Puntos en el arreglo: " << pa << endl;

    // Eliminando el último punto
    pa.popBack();
    cout << "Después de eliminar un punto: " << pa << endl;

    // Modificando un punto mediante el operador de índice
    pa[0].setX(10);
    cout << "Después de modificar: " << pa << endl;

    return 0;
}