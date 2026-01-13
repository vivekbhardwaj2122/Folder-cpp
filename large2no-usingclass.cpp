#include <iostream>
using namespace std;

class Largest {
public:
    int findLargest(int a, int b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Largest obj;
    cout << "Largest = " << obj.findLargest(10, 20);
    return 0;
}
