#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    private:
        int x;
        int y;
    public:
        Point(): x{0}, y{0} {
            std::cout << "Default constructor" << std::endl;            
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        void setX(int _x) {
            x = _x;
        }
        void setY(int _y) {
            y = _y;
        }
        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
};

#endif

#include <iostream>

using namespace std;

void printArr(Point*n){
    for(int i=0;i<2;i++){
        cout<<(n+i)->print();
    }
}

int main() {
    Point p;
    // p.print();
    
    Point *ptr = &p;
    ptr ->print();
    ptr ->setY(5);ptr ->setX(3);
    ptr ->print();
    // Hacer arreglo de points y mostrar en una función sus elementos
    Point a[] = {Point(), Point()};
    printArr(a);
}