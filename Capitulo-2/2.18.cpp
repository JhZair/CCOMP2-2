#include <iostream>
using namespace std;

int main() {

   int numero1, numero2;

   cout << "Dos números: ";
   cin >> numero1 >> numero2;

   if ( numero1 == numero2 ) {
      cout << "These numbers are equal.\n";
      return 0;
   }

   if ( numero2 > numero1 )
      numero1 = numero2;

   cout << numero1 << " is larger." << endl;

   return 0;
}