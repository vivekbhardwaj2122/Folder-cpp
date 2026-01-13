#include <iostream>
using namespace std;

class Student {
public:
    int age;
};

int main() {
    Student s;
    s.age = 20;
    cout << "Age = " << s.age;
    return 0;
}
