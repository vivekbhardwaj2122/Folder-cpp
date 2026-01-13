#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base";
    }
};

class Child : public Base {
public:
    void print() {
        cout << "Child";
    }
};

int main() {
    Base* b;
    Child c;
    b = &c;
    b->print();
    return 0;
}
