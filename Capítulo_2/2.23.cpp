#include <iostream>
using namespace std;

int main() {
   int n1, n2, n3, n4, n5;
   
   cout << "Ingresa 5 enteros: ";
   cin >> n1 >> n2 >> n3 >> n4 >> n5;
 
   int min{ n1 };

   if ( n2 < min ) 
    min = n2;
   if ( n3 < min ) 
    min = n3;
   if ( n4 < min ) 
    min = n4;
   if ( n5 < min ) 
    min = n5;

   int max{ n1 };

   if ( n2 > max ) 
    max = n2;
   if ( n3 > max ) 
    max = n3;
   if ( n4 > max ) 
    max = n4;
   if ( n5 > max ) 
    max = n5;

   cout << "El más grande es " << max
      << "\nEl más pequeño es  " << min << endl;

   return 0;
}