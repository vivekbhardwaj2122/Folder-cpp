#include <iostream>
using namespace std;

class Base {
public:
    int marks = 80;
};

class Result : public Base {
};

int main() {
    Result r;
    cout << r.marks;
    return 0;
}
