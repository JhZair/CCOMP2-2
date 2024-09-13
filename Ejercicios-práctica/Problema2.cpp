#include <iostream>
using namespace std;

int main(){
  int n{0};
  cout << "Ingresa un número: ";
  cin >> n;
  if (n>0)
    cout <<"\n"<< 1;
  else
    return 0;
  for (int x=2; x < n; x++){ 
    if (x % 2 != 0)
      cout <<", "<< x;
  }
}
