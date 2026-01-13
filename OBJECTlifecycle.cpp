#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Object Created ";
    }
    ~Test() {
        cout << "Object Destroyed";
    }
};

int main() {
    Test t;
    return 0;
}
