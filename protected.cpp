#include <iostream>
using namespace std;

class Base {
public:
    int num = 25;
};

class Child : protected Base {
public:
    int show() {
        return num;
    }
};

int main() {
    Child c;
    cout << c.show();
    return 0;
}
