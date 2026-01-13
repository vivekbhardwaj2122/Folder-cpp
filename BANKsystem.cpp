#include <iostream>
using namespace std;

class Bank {
public:
    int balance = 1000;
};

int main() {
    Bank b;
    b.balance = b.balance + 500;
    cout << "Balance = " << b.balance;
    return 0;
}
