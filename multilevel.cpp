#include <iostream>
using namespace std;

class GrandParent {
public:
    int land = 50;
};

class Parent : public GrandParent {
};

class Child : public Parent {
};

int main() {
    Child c;
    cout << c.land;
    return 0;
}
