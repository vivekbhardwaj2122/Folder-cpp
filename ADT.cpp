#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;

    cout << "Popped = " << stack[top--];
    return 0;
}
