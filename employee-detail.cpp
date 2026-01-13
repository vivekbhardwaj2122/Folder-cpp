#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    char name[20];

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name;
    }
};

int main() {
    Employee emp = {101, "Amit"};
    emp.display();
    return 0;
}
