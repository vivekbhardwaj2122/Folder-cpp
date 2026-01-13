#include <iostream>
using namespace std;

class Count {
public:
    static int total;

    Count() {
        total++;
    }
};

int Count::total = 0;

int main() {
    Count a, b, c;
    cout << "Total objects = " << Count::total;
    return 0;
}
