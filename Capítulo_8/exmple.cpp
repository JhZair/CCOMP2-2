/**
 * Implemente una función que reciba un arreglo de enteros y su 
 * tamaño y duplique todos los elementos del arreglo
 */
#include <iostream>

using namespace std;

void dupleArr(int *a, int b){
    int i{0};
    while(i<b){
        *(a+i)*=2;
        i++;
    }
}

void funcion(int* arr,int b) {
    cout << "Tamaño del puntero dentro de la función: " << sizeof(arr) << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,23,64};
    int tam = sizeof(arr) / sizeof(arr[0]);
    dupleArr(arr,tam);
    for(int i : arr){
        cout << i << endl;
    }
    // cout << sizeof(arr[0])<<endl;

    int arr2[5] = {1, 2, 3, 4, 5};
    cout << "Tamaño del array en main: " << sizeof(arr2) << endl;
    funcion(arr2,5);

    return 0;
}   