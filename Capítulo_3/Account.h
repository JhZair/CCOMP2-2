#include <iostream> 

using namespace std;

class Account{
private:
    string name;
    int age;
public:
    Account(string _name, int _age){
        name = _name;
        age = _age;
    }
    Account(){
        name = " ";
        age = 0;
    }
    string getName() const {
        return name;
    }
    void setName(string n){
        name = n;
    }
    int getAge() const {
        return age;
    }
    void setAge(int e){
        age = e;
    }
};