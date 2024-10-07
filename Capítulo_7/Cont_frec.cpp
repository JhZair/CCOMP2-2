#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec(6);
    cout <<"Ingresa valores entre 1 y 10:\n";
    for(int i{0};i<vec.size();i++){
        cin >> vec[i];
        cout << endl;
    }
    vector<int> cp(vec.size());
    for(int i{0};i<vec.size();i++){
        for(int j{0};j<vec.size();j++){
            if(vec[i]==vec[j])
                cp[i]++;
        }
        cout << vec[i] <<": "<< cp[i]<<endl;
    }


    return 0;
}