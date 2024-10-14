#include <iostream>
// #include <array>
#include <iomanip>

using namespace std;

int main(){
    const size_t arraySize{5};
    array<int, arraySize> values;
    int arr[]={1,5,2,6,7};
    for (size_t i{0}; i < values.size(); ++i) { // set the values
        values[i] = 2 + 2 * i;
    }
    cout << "Values" << endl;
    
    for (int & i : arr) {
        i*=i;
       cout << setw(5) << i << endl;
    }
    return 0;
}