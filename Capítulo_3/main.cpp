#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account myaccount1;
    cout <<"El nombre de mi cuenta es: "<< myaccount1.getName()<<endl;
    
//     string a;
//     cout <<"Ingrese un nombre: " <<endl;
//     getline(cin,a);
//     myaccount1.setName(a);

    cout<<"Ahora el nombre es:"<<myaccount1.getName()<<endl;

    return 0;
}