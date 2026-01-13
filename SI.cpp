#include <iostream>
using namespace std;

int main() {
    float principal = 1000, rate = 5, time = 2;
    float simpleInterest;

    simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest = " << simpleInterest;
    return 0;
}
