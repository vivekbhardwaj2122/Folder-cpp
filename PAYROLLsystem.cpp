#include <iostream>
using namespace std;

class Employee {
public:
    int salary = 5000;
};

int main() {
    Employee e;
    cout << "Salary = " << e.salary;
    return 0;
}
