#include <iostream>
using namespace std;

class A {
    int x;
public:
    friend int main();
};

class B {
    int y;
public:
    friend int main();
};

int main() {
    A a;
    B b;
    a.x = 5;
    b.y = 10;
    cout << "Sum = " << a.x + b.y;
    return 0;
}
