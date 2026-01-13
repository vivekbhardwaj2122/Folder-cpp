#include <iostream>
using namespace std;

int main() {
    int choice = 2;

    switch (choice) {
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
