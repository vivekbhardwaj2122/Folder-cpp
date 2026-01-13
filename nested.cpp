#include <iostream>
using namespace std;

int main() {
    int num = 15;

    if (num > 0) {
        if (num % 2 == 0)
            cout << "Positive Even Number";
        else
            cout << "Positive Odd Number";
    }
    return 0;
}
