#include <iostream>
using namespace std;

int main() {

   char ch;

   cout << "Carácter: ";
   cin >> ch;

   cout << "El entero equivalente es " << static_cast< int >( ch ) << endl;

   return 0;
}