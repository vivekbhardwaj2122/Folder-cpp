#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class";
    }
};

class Child : public Base {
public:
    void show() {
        cout << "Child class";
    }
};

int main() {
    Base* obj;
    Child c;
    obj = &c;
    obj->show();
    return 0;
}
