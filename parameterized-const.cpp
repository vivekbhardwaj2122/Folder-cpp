#include <iostream>
using namespace std;

class Demo {
public:
    Demo(int x) {
        cout << "Value = " << x;
    }
};

int main() {
    Demo obj(10);
    return 0;
}
