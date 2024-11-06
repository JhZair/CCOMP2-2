#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
#include "SalariedEmployee.h"

using namespace std;

const int CURRENT_MONTH{ 8 };

int main() {
    cout << fixed << setprecision(2);

    vector<Employee*> employees{
        new SalariedEmployee("Pitt", "Johnson", "222-22-2222", 4, 15, 1985, 1200),
        new CommissionEmployee("Michael", "Brown", "444-44-4444", 7, 20, 1992, 15000, .07),
        new BasePlusCommissionEmployee("Emma", "Davis", "555-55-5555", 9, 10, 1988, 7000, .05, 500),
        new PieceWorker("Chris", "Taylor", "666-66-6666", 8, 25, 1995, 3.5, 300),
        new HourlyWorker("Tilín", "Anderson", "777-77-7777", 3, 14, 1991, 15.0, 40)
    };

    for (Employee* employeePtr : employees) {
        cout << employeePtr->toString() << endl;

        if (auto derivedPtr = dynamic_cast<BasePlusCommissionEmployee*>(employeePtr)) {
            derivedPtr->setBaseSalary(1.1 * derivedPtr->getBaseSalary());
            cout << "new base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl;
        }

        cout << "earned $" << employeePtr->earnings() + 
            (employeePtr->getBirthDate().getMonth() == CURRENT_MONTH ? 100.0 : 0.0) << "\n\n";
    }

    for (size_t i = 0; i < employees.size(); ++i) {
        cout << "deleting object of " << typeid(*employees[i]).name() << endl;
        delete employees[i];
    }

    return 0;
}
