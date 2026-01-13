#include <iostream>
using namespace std;

int main() {
    int marks = 85;

    if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 75)
        cout << "Grade B";
    else if (marks >= 60)
        cout << "Grade C";
    else
        cout << "Fail";
    return 0;
}

