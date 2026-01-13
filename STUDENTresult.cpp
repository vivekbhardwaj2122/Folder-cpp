#include <iostream>
using namespace std;

class Student {
public:
    int marks = 85;
};

int main() {
    Student s;
    if (s.marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";
    return 0;
}
