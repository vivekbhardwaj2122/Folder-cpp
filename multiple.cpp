#include <iostream>
using namespace std;

class Father {
public:
    int car = 1;
};

class Mother {
public:
    int bike = 1;
};

class Child : public Father, public Mother {
};

int main() {
    Child c;
    cout << c.car + c.bike;
    return 0;
}
