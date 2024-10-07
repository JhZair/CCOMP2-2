#include <iostream>
#include <vector>
using namespace std;

void vecSquare(vector <int>&);
void outVect(vector <int>);
int main(){
    vector <int> a = {2,4,6,8};
    vecSquare(a);
    outVect(a);
}
void vecSquare(vector <int> & a){
    for( int i = 0;i< a.size() ;i++ ){
        a[i] *= a[i];
    }
}   
void outVect(vector <int> b){
    for(int i = 0; i < b.size() ; i++)
        cout << b[i] << endl;
}