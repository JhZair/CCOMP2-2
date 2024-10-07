#include <iostream>

using namespace std;

int lenString(string a);

int main(){
    cout << lenString("HoLa") << endl;
}
int lenString(string a){
    int i{0};
    for(; a[i] != '\0';i++){}
    return i;
}   