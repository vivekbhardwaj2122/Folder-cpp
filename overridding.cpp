#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child";
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}
