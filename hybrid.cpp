#include <iostream>
using namespace std;

class A {
public:
    int x = 10;
};

class B : public A {
};

class C {
public:
    int y = 20;
};

class D : public B, public C {
};

int main() {
    D d;
    cout << d.x + d.y;
    return 0;
}

