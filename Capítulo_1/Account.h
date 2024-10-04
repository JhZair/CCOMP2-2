#include <string>
using namespace std;

class Account {
    public:
        explicit Account(string accountName)
            : name{accountName} {
        }
        void setName(string accountName) {
            name = accountName;
        }
        string getName() const {
            return name;
        }
    private:
        string name;
};