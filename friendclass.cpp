#include <iostream>
using namespace std;

class One {
    int num;
public:
    friend class Two;
};

class Two {
public:
    void show() {
        One o;
        o.num = 100;
        cout << o.num;
    }
};

int main() {
    Two t;
    t.show();
    return 0;
}
