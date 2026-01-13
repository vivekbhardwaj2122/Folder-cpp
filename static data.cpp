#include <iostream>
using namespace std;

class Test {
public:
    static int count;
};

int Test::count = 5;

int main() {
    cout << Test::count;
    return 0;
}
