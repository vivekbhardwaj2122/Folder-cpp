#include <iostream>
using namespace std;

class Student {
public:
    int roll = 1;
};

class Marks : public Student {
public:
    int marks = 90;
};

int main() {
    Marks m;
    cout << m.roll << " " << m.marks;
    return 0;
}
