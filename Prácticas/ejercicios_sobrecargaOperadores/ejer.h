#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Constructor por defecto
    Point() : x(0), y(0) {}

    // Constructor con parámetros
    Point(int x, int y) : x(x), y(y) {}

    // Accesores
    int getX() const { return x; }
    int getY() const { return y; }

    // Modificadores
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    // Sobrecarga del operador de salida
    friend ostream &operator<<(ostream &os, const Point &p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }

    // Sobrecarga del operador de entrada
    friend istream &operator>>(istream &is, Point &p) {
        is >> p.x >> p.y;
        return is;
    }
};