#include <iostream>

using namespace std;

void invArr(int a[],int b){
    int tmp;
    for(int i=0;i<=b/2;i++){
        tmp = a[i];
        a[i]= a[b-i-1];
        a[b-i-1]= tmp;
    }
}

void invArrPtr(int * a,int b){
    int tmp;
    // for(int i=0;i<=b/2;i++){
    //     tmp = *(a+i);
    //     *(a+i)=*(a+b-i-1);
    //     *(a+b-i-1)=tmp;
    // }
    for(int i=0;i<=b/2;i++){
        tmp = a[i];
        a[i]= a[b-i-1];
        a[b-i-1]= tmp;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int tam{5};
    
    invArr(arr,tam);
    for(int i{0};i<tam;cout<<arr[i++]<<' ');
    
    cout << endl;

    invArrPtr(arr,tam);
    for(int i{0};i<tam;cout<<arr[i++]<<' ');

    cout << endl;
}