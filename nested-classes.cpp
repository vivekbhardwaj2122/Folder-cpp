#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void show() {
            cout << "This is inner class";
        }
    };
};

int main() {
    Outer::Inner obj;
    obj.show();
    return 0;
}
