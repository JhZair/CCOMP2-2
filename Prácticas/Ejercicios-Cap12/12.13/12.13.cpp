#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    vector<Account*> accounts{
        new SavingsAccount{100.0, 3.0},
        new CheckingAccount{10.0, 0.5},
    };

    cout << fixed << setprecision(2);

    for (Account* accountPtr : accounts) {
        double amount;

        cout << "Balance is $" << accountPtr->getBalance()
             << " (" << typeid(*accountPtr).name() << ")\n";

        cout << "Withdraw amount: $";
        cin >> amount;
        accountPtr->debit(amount);

        cout << "Deposit amount: $";
        cin >> amount;
        accountPtr->credit(amount);

        if (auto* derivedPtr = dynamic_cast<SavingsAccount*>(accountPtr)) {
            cout << "Adding the interest to the balance..." << endl;
            derivedPtr->credit(derivedPtr->calculateInterest());
        }

        cout << "Updated balance is $" << accountPtr->getBalance() << "\n\n";
    }

    for (Account* accountPtr : accounts) {
        delete accountPtr;
    }

    return 0;
}
