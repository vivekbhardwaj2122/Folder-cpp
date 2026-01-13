#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    cout << "String Length = " << length;
    return 0;
}
