#include <iostream>

using namespace std;

int fibIter(int n){
    int a{1};
    int b{1};
    int c;
    int cont{2};
    while(cont <= n){
        c = a+b;
        a = b;
        b = c;
        cont++;
    }
    return b;
}

int fib(int n){
    if(n==1||n==0)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main(){

    cout << fibIter(5) << endl;
    cout << fib(5) << endl;

    return 0;
}