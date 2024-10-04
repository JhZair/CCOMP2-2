#include <iostream>
using namespace std;

int main() {

   int numero;

   cout << "Ingresa un entero de 4 dígitos: ";
   cin >> numero;

   cout << numero % 10 << "  "
        << numero % 100 / 10 << "  "
        << numero % 1000 / 100 << "  "
        << numero / 1000 << endl;

   return 0;
}