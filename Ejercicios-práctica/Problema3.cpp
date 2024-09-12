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