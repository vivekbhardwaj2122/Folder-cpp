#include <iostream>
using namespace std;

class Product {
public:
    int price = 200;
};

int main() {
    Product p;
    cout << "Price = " << p.price;
    return 0;
}
