#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

const int CURRENT_MONTH{ 5 };

int main() {
    cout << fixed << setprecision(2);

    vector<Employee*> employees{
        new SalariedEmployee("Ana", "Brah", "222-22-2222", 6, 15, 1987, 950),
        new CommissionEmployee("James", "Willy", "555-55-5555", 3, 18, 1995, 12000, .07),
        new BasePlusCommissionEmployee("Laura", "Clark k", "666-66-6666", 11, 20, 1989, 6000, .05, 400)
    };
    for (Employee* employeePtr : employees) {
        cout << employeePtr->toString() << endl;

        if (BasePlusCommissionEmployee* derivedPtr = dynamic_cast<BasePlusCommissionEmployee*>(employeePtr)) {
            derivedPtr->setBaseSalary(1.1 * derivedPtr->getBaseSalary());
            cout << "new base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl;
        }
        cout << "earned $" << employeePtr->earnings() +
                (employeePtr->getBirthDate().getMonth() == CURRENT_MONTH ? 100.0 : 0.0) << "\n\n";
    }
    for (Employee* employeePtr : employees) {
        cout << "deleting object of " << typeid(*employeePtr).name() << endl;
        delete employeePtr;
    }
}
