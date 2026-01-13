#include <iostream>
using namespace std;

class Cart {
public:
    int total = 1000;
};

int main() {
    Cart c;
    cout << "Cart Total = " << c.total;
    return 0;
}
