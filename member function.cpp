#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo() { x = 10; }
    void show() const {
        cout << x;
    }
};

int main() {
    Demo d;
    d.show();
    return 0;
}
