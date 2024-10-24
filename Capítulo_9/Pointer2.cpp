#include <iostream>

using namespace std;

int* getPtrToFive() {
    int x = 5;
    return &x;
}
int main() {
    int* p;
    if (true) {
        int x = 5;
        p = &x;
    }
    cout << *p << endl; // ???

    int* p = getPtrToFive();
    cout << *p << endl;
}
