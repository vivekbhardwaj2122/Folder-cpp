#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base";
    }
};

class Child : public Base {
public:
    void show() {
        cout << "Child";
    }
};

int main() {
    Base* b;
    Child c;
    b = &c;
    b->show();
    return 0;
}
