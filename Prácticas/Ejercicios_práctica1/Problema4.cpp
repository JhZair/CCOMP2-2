#include <iostream>

class Date {
private:
    int month;  // Mes
    int day;    // Día
    int year;   // Año

public:
    // Constructor con validación del mes
    Date(int m, int d, int y) : day{d}, year{y} {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            month = 1;  // Si el mes no está en el rango 1-12, lo establecemos en 1
        }
    }

    // Getters
    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    // Setters
    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            month = 1;
        }
    }

    void setDay(int d) {
        day = d;
    }

    void setYear(int y) {
        year = y;
    }

    // Función para mostrar la fecha en formato mm/dd/yyyy
    void displayDate() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};

// Función principal
int main() {
    // Crear un objeto Date con mes válido
    Date date1(10, 15, 2023);  // Mes: 10, Día: 15, Año: 2023
    std::cout << "Fecha 1 (mes válido): ";
    date1.displayDate();

    // Crear un objeto Date con mes inválido
    Date date2(13, 25, 2024);  // Mes: 13 (inválido), Día: 25, Año: 2024
    std::cout << "Fecha 2 (mes inválido): ";
    date2.displayDate();

    return 0;
}
