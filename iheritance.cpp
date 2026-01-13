#include <iostream>
using namespace std;

class Parent {
public:
    int money = 100;
};

class Child : public Parent {
};

int main() {
    Child c;
    cout << c.money;
    return 0;
}
