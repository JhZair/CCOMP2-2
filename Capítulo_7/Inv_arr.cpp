#include <iostream>
#include <array>

using namespace std;

int main(){
    int arr[5];
    for(int i{0};i<5;i++){
        cin >> arr[i];
    }
    int arrInv[5];
    for(int e{5};e>=0;e--)
        arrInv[5-e] = arr[e-1];

    for(int i{0};i<5;i++)
        cout << arrInv[i] << " ";
    cout<<endl;

    return 0;
}