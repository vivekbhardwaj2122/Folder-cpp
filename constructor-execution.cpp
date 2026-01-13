#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor A\n";
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor B";
    }
};

int main() {
    B obj;
    return 0;
}
