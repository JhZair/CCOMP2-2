/*
#include <iostream>

using namespace std;
bool esPrimo(int a){
    int b = 0;
    int x = a;
    for (; x>0; x--){
        if (x % a == 0)
            b++;
    }
    if (b>2){
        cout << "Es primo";    
        return true;
    }
    else
        return false;    
}
int main(){
    cout << "Ingresa un numero: ";
    int a = 0;
    cin >> a;
    for (;a > 0;a--){
        if (esPrimo(a)) {
            cout << a << endl;
        }
        else{
            cout << "No es primo"<<endl;
        }
    }
    return 0;
}   
*/

#include <iostream>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;  // Los números menores o iguales a 1 no son primos
    }
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;  // Si es divisible por cualquier número, no es primo
        }
    }
    
    return true;  // Si no tiene divisores, es primo
}

int main() {
    int n;
    
    // Solicitar el número
    std::cout << "Introduce un número: ";
    std::cin >> n;

    // Imprimir todos los números primos menores a n
    std::cout << "Números primos menores a " << n << ": ";
    
    for (int i = 2; i < n; ++i) {
        if (esPrimo(i)) {
            std::cout << i << " ";
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}
