#include <iostream>
using namespace std;

class Test {
public:
    int x;
};

int main() {
    Test* t = new Test;
    t->x = 50;
    cout << t->x;
    delete t;
    return 0;
}
