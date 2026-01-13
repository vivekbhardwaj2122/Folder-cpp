#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Dynamic Binding";
    }
};

int main() {
    Base b;
    b.show();
    return 0;
}
