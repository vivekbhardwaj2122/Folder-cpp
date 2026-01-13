#include <iostream>
using namespace std;

class A {
    int x;
public:
    friend class B;
};

class B {
public:
    void show() {
        A a;
        a.x = 10;
        cout << a.x;
    }
};

int main() {
    B b;
    b.show();
    return 0;
}
