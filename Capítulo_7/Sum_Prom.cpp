#include <iostream>

using namespace std;

int main(){
    int arr[10];
    int sum{0};
    for(int i{0};i<10;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout <<"Suma es:"<<sum<<"\nY promedio es: "<<sum/10<<endl;
    return 0;
}