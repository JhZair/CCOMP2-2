#include <iostream>

using namespace std;

int arrPrime(int[],int);
bool isPrime(int x);

int main(){
    int c[6] = {1,2,6,13,5,7};
    cout << arrPrime(c, 6)<<endl;
}
int arrPrime(int a[], int b){
    int result{0};
    for(int i = 0; i<b;i++){
        if(isPrime(a[i]))
            result++;
    }
    return result;
}
bool isPrime(int x){
    if (x==1) return false;
        
    for(int i = 2; i < x; i++){
        if (x%i == 0)
            return false;
    }
    return true;
}