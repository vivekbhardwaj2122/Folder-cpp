#include <iostream>
using namespace std;

class Compare {
public:
    int value;
};

int main() {
    Compare obj1, obj2;
    obj1.value = 10;
    obj2.value = 20;

    if (obj1.value > obj2.value)
        cout << "Object 1 is greater";
    else
        cout << "Object 2 is greater";

    return 0;
}
