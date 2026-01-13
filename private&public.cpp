#include <iostream>
using namespace std;

class Sample {
private:
    int secret = 100;

public:
    void show() {
        cout << "Private value = " << secret;
    }
};

int main() {
    Sample obj;
    obj.show();
    return 0;
}
