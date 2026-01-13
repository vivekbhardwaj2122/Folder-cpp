#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor\n";
    }

    Demo(int x) {
        cout << "Parameterized Constructor";
    }
};

int main() {
    Demo obj1;
    Demo obj2(5);
    return 0;
}
