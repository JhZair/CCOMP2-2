#include <iostream>

using namespace std;

void cambio(int & a, int & b){
    int tmp = a;
    a = b;
    b = tmp;
}

void inverArr(int a[],int b){
    for(int i=0;i<b;i++,b--){
        cambio(a[i],a[b-1]);
    }
}

void inverArrPtr(int *a,int b){
    int i{0};
    while(i<b){
        cambio(*(a+i),*(a+b-1));
        i++;
        b--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int tam = 6;
    inverArrPtr(arr,tam);
    for(int i : arr){
        cout << i <<" ";
    }
    cout << endl;
}