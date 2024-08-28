#include <iostream>
using namespace std;

int main() {

   int numero1, numero2, numero3;
   int max{ numero1 };
   int min{ numero1 };
   
   cout << "Input three different integers: ";
   cin >> numero1 >> numero2 >> numero3;

   if ( numero2 < min ) 
    min = numero2;
   if ( numero3 < min ) 
    min = numero3;

   if ( numero2 > max )  
    max = numero2;
   if ( numero3 > max )
    max = numero3;

   cout << "Sum is " << numero1 + numero2 + numero3
      << "\nAverage is " << ( numero1 + numero2 + numero3 ) / 3
      << "\nProduct is " << numero1 * numero2 * numero3
      << "\nSmallest is " << min
      << "\nLargest is " << max << endl;

   return 0;
}