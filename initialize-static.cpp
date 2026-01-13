#include <iostream>
using namespace std;

class Demo {
public:
    static int count;
};

int Demo::count = 5;

int main() {
    cout << "Static value = " << Demo::count;
    return 0;
}
