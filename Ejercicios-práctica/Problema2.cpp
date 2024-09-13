#include <iostream>

using namespace std;

int main(){
    cout << "Ingresa un entero: ";
    int a=0;
    cin >> a;
    for (int x = 0; x < a;x++){
        if (x % 2 != 0){
            cout << x;
            if (x < a-1)
                cout << ", ";
        }
    }   
    cout <<"\n";
    return 0;
}   
