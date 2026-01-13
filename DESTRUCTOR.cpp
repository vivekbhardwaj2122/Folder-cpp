#include <iostream>
using namespace std;

class A {
public:
    virtual ~A() {
        cout << "Destroyed";
    }
};

int main() {
    A* a = new A;
    delete a;
    return 0;
}
