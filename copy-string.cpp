#include <iostream>
using namespace std;

int main() {
    char source[] = "Cplusplus";
    char destination[20];
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    cout << "Copied String = " << destination;
    return 0;
}
