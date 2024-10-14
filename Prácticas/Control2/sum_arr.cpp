#include <iostream>

using namespace std;

int sum_arr(int a[],int b){
    int sum{0};
    for(int i=0;i<b;sum+=a[i++]);
    return sum;
}
 int sum_arr_prt(int*a,int b){
    int sum{0};
    for(int i=0;i<b;i++){
        sum+=*(a+i);
    }
    return sum;
}
int main(){
    int arr[]={1,5,7};
    cout<<"La suma del array es: "<< sum_arr(arr,3)<<endl;
    
    cout<<"La suma del array es: "<< sum_arr_prt(arr,3)<<endl;
}