#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount{"Naa"};
    cout << "El nombre inicial de la cuenta es: "
            << myAccount.getName();
    
    cout << "\nPor favor, ingrese el nombre de la cuenta: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    cout << "El nombre de la Account es: "
            << myAccount.getName() << endl;

    return 0;
}