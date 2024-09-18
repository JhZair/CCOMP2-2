#include <iostream>

using namespace std;

bool esPrimo(int x){
    for(int i=2;i<x;i++){
        if(x%i == 0)
            return false;
    }
    return true;
}

int main() {
    int n = 0;
    cout << "Ingresa un número: ";
    cin >> n;
    for(int i=2;i<n;i++){
        if (esPrimo(i))
            cout << i << endl;
    }
}
