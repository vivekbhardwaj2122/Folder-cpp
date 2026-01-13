#include <iostream>
using namespace std;

class Data {
    int secret;
public:
    friend int main();
};

int main() {
    Data d;
    d.secret = 100;
    cout << d.secret;
    return 0;
}
