#include <iostream>
using namespace std;

class Base {
public:
    int value = 10;
};

class Child : private Base {
public:
    int get() {
        return value;
    }
};

int main() {
    Child c;
    cout << c.get();
    return 0;
}
