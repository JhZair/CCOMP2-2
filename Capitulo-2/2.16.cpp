#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    std::cout << "Diferencia de " << num1 << " y " << num2 << " = "
              << abs(num1 - num2) << std::endl;
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;

    return 0;
}