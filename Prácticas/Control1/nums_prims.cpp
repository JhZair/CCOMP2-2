#include <iostream>

using namespace std;

void nPrims(int n){
    for(int i{2};i<n;i++){
        bool prime{true};
        for(int e{2};e<i;e++){
            if(i%e==0){
                prime = false;
            }
        }
        if(prime)
            cout << i << endl;
    }
}

int main(){
    nPrims(114);
    return 0;
}