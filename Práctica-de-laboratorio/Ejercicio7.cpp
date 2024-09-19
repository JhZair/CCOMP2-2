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
    int num = 10001;
    int term = 0;
    int ult = 0;
    for(int i=2;term<num;i++){
        if (esPrimo(i)){
            term++;
            ult = i;
        }
    }
    cout << ult << endl;
}