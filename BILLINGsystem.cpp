#include <iostream>
using namespace std;

class Bill {
public:
    int amount = 300;
};

int main() {
    Bill b;
    cout << "Bill Amount = " << b.amount;
    return 0;
}
