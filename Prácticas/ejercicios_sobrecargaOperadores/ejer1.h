#include <iostream>
#include "ejer.h"

class PointArray {
private:
    Point* points;
    int size;

    void resize(int newSize) {
        Point* newArray = new Point[newSize];
        for (int i = 0; i < size && i < newSize; i++) {
            newArray[i] = points[i];
        }
        delete[] points;
        points = newArray;
        size = newSize;
    }

public:
    PointArray() : points(nullptr), size(0) {}

    PointArray(const Point arr[], int size) : size(size) {
        points = new Point[size];
        for (int i = 0; i < size; i++) {
            points[i] = arr[i];
        }
    }

    ~PointArray() {
        delete[] points;
    }

    int getSize() const { return size; }

    void pushBack(const Point& p) {
        resize(size + 1);
        points[size - 1] = p;
    }

    void popBack() {
        if (size > 0) {
            resize(size - 1);
        }
    }

    // Sobrecarga del operador de índice
    Point& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Índice fuera de rango");
        }
        return points[index];
    }

    const Point& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw out_of_range("Índice fuera de rango");
        }
        return points[index];
    }

    // Sobrecarga del operador de salida para imprimir la lista de puntos
    friend ostream &operator<<(ostream &os, const PointArray &pa) {
        os << "[";
        for (int i = 0; i < pa.size; i++) {
            os << pa.points[i];
            if (i < pa.size - 1) os << ", ";
        }
        os << "]";
        return os;
    }
};