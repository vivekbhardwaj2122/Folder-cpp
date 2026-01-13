#include <iostream>
using namespace std;

class Test {
public:
    int number;
};

int main() {
    Test t;
    int number = 50;     // local variable
    t.number = number;  // member variable
    cout << "Number = " << t.number;
    return 0;
}
