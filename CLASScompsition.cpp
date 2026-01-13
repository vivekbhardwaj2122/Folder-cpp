#include <iostream>
using namespace std;

class Engine {
public:
    int power = 100;
};

class Car {
public:
    Engine e;
};

int main() {
    Car c;
    cout << c.e.power;
    return 0;
}
