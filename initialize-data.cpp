#include <iostream>
using namespace std;

class Demo {
public:
    const int x;

    Demo(int a) : x(a) {
        cout << "Value of x = " << x;
    }
};

int main() {
    Demo obj(10);
    return 0;
}
