#include <iostream>

using namespace std;

int lenString(string a);

int main(){
    cout << lenString("Hola") << endl;
}
int lenString(string a){
    char actual{' '};
    int result = 0;
    for( ; actual != '\0';result++ )
        actual = a[result];
    return result - 1;
}   