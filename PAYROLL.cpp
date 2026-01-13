#include <iostream>
using namespace std;

class Employee {
public:
    int id = 101;
};

class Salary : public Employee {
public:
    int pay = 5000;
};

int main() {
    Salary s;
    cout << s.id << " " << s.pay;
    return 0;
}
