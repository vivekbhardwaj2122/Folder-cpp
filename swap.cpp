#include <iostream>
using namespace std;

int main() {
    int num1 = 5, num2 = 10, temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping:\n";
    cout << "num1 = " << num1 << "\nnum2 = " << num2;
    return 0;
}
