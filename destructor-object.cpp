#include <iostream>
using namespace std;

class Demo {
public:
    ~Demo() {
        cout << "Object Destroyed";
    }
};

int main() {
    Demo obj;
    return 0;
}
