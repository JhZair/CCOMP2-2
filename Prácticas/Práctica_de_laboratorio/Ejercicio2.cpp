#include <iostream>

using namespace std;
int fibPar(int n){
    int a=1;
    int b=2;
    int c=1;
    int sum=0;
    for(int i=0;a<=n;i++){
        c = a+b;
        a=b;
        b=c;
        if (a%2==0)
            sum+=a;
    }
    return sum;
}

int main(){
    cout << fibPar(4000000) << endl;
}