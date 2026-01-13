#include <iostream>
using namespace std;

class Box {
    int length;
public:
    friend int main();
};

int main() {
    Box b;
    b.length = 10;
    cout << "Length = " << b.length;
    return 0;
}
