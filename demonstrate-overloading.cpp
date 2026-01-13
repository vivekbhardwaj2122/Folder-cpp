#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "No argument constructor\n";
    }

    Demo(int a) {
        cout << "One argument constructor";
    }
};

int main() {
    Demo obj1;
    Demo obj2(5);
    return 0;
}
