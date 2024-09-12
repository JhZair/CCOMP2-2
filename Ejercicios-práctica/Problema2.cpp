#include <iostream>

using namespace std;

int main(){
    cout << "Ingresa un entero: ";
    int a;
    cin >> a;
    for (int x = 0; x < a;x++){
        if (x % 2 != 0){
            cout << x;
            if (x < a-1)
                cout << ", ";
        }
    }   

    return 0;
}   
