#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Math obj;
    cout << "Sum = " << obj.add(5, 3);
    return 0;
}
