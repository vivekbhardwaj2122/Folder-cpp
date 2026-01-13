#include <iostream>
using namespace std;

class Demo {
    int *ptr;
public:
    Demo() {
        ptr = new int;
        *ptr = 10;
        cout << "Value = " << *ptr;
    }
};

int main() {
    Demo obj;
    return 0;
}
