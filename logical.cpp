#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << (a < b && a > 0) << endl;
    cout << (a > b || a > 0) << endl;
    cout << !(a > b) << endl;
    return 0;
}
