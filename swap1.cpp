#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 6;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\n";
    cout << "a = " << a << "\nb = " << b;
    return 0;
}
