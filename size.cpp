#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 20.55;

    cout << "int size: " << sizeof(a) << " bytes\n";
    cout << "float size: " << sizeof(b) << " bytes\n";
    cout << "char size: " << sizeof(c) << " bytes\n";
    cout << "double size: " << sizeof(d) << " bytes\n";
    return 0;
}
