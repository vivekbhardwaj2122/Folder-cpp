#include <iostream>
using namespace std;

class Teacher {
public:
    int id = 1;
};

class Student {
public:
    Teacher* t;
};

int main() {
    Teacher t1;
    Student s;
    s.t = &t1;
    cout << s.t->id;
    return 0;
}
