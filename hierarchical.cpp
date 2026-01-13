#include <iostream>
using namespace std;

class Parent {
public:
    int house = 1;
};

class Son : public Parent {
};

class Daughter : public Parent {
};

int main() {
    Son s;
    Daughter d;
    cout << s.house << " " << d.house;
    return 0;
}
