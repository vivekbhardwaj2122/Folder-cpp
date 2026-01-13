#include <iostream>
using namespace std;

class Area {
public:
    float radius = 3;

    void circleArea() {
        cout << "Area of Circle = " << 3.14 * radius * radius;
    }
};

int main() {
    Area obj;
    obj.circleArea();
    return 0;
}
