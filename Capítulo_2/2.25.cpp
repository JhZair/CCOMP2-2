#include <iostream>
using namespace std;

int main() {

   int n1, n2, n3;

   cout << "Ingrese 3 enteros: ";
   cin >> n1 >> n2 >> n3;

   if ( n3 % n1 == 0 ) cout << n1 << " es factor de " << n3 << endl;
   if ( n3 % n2 == 0 ) cout << n2 << " es factor de " << n3 << endl;

   return 0;
}