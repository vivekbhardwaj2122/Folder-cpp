#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    Student s1 = {1, "Rahul", 85.5};

    cout << "Roll No: " << s1.roll << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
