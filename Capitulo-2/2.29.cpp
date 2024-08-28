#include <iostream>
using namespace std;

int main() {

   cout << "Longitud cara\tÁrea superficie\tVolumen\n"
      << "cubo de (cm)\tcubo de (cm^2)\tcubo de (cm^3)\n\n"
      << 0 << "\t\t" << 0 * 0 * 6 << "\t\t" << 0 * 0 * 0 << '\n'
      << 1 << "\t\t" << 1 * 1 * 6 << "\t\t" << 1 * 1 * 1 << '\n'
      << 2 << "\t\t" << 2 * 2 * 6 << "\t\t" << 2 * 2 * 2 << '\n'
      << 3 << "\t\t" << 3 * 3 * 6 << "\t\t" << 3 * 3 * 3 << '\n'
      << 4 << "\t\t" << 4 * 4 * 6 << "\t\t" << 4 * 4 * 4 << endl;

   return 0;
}