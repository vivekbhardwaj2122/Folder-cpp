#include <iostream>
using namespace std;

class Demo {
public:
    int value;

    Demo(int v) {
        value = v;
    }

    Demo(Demo &obj) {
        value = obj.value;
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;

    cout << "Copied Value = " << obj2.value;
    return 0;
}
