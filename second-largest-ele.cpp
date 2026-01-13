#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 40, 30, 20, 50};
    int largest = arr[0], secondLargest = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
    }

    cout << "Second Largest = " << secondLargest;
    return 0;
}
