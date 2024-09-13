#include <iostream>

using namespace std;

int main(){
    int b=0;
    for (int x=1;x<10000;x++){
        if (x % 5 == 0|| x % 3 == 0){
            //cout << x <<" ,";
            b += x;
        }
    }
    cout << "\nLa suma es: " << b << endl; 
    return 0;
}   
