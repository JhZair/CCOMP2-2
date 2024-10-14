#include <iostream>

using namespace std;

void intercamb(int&a, int&b){
    int tmp{a};
    a=b;
    b=tmp;
}

void intercam_ptr(int*a,int*b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}int main(){
    int x{4}, y{7};

    cout << x << y << endl;
    intercamb(x,y);

    cout << x << y << endl;
    intercam_ptr(&x,&y);

    cout << x << y << endl;

    return 0;
}