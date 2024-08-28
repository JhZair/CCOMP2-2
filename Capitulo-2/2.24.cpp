#include <iostream>
using namespace std;

int main() {

   int n1, n2;

   cout << "Ingresa 2 enteros: ";
   cin >> n1 >> n2;
   
   if ( n1 % 2 )
    cout << n1 << " es impar.\n";
   if ( n2 % 2 )
    cout << n2 << " es impar.\n";
   if ( ( n1 + n2 ) % 2 )
    cout << "La suma es " << n1 + n2 << ", es impar." << endl;

   return 0;
}