#include <iostream>
using namespace std;

int main() {

   int radio;

   cout << "Ingresa el radio entero del cículo: ";
   cin >> radio;

   cout << "El diámetro es " << 2 * radio
      << "\nLa circunferencia es " << 2 * 3.14159 * radio
      << "\nEl área es  " << 3.14159 * radio * radio << endl;

   return 0;
}