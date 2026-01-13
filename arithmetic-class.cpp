#include <iostream>
using namespace std;

class Calculate {
public:
    int a = 10, b = 5;

    void operations() {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b;
    }
};

int main() {
    Calculate obj;
    obj.operations();
    return 0;
}
