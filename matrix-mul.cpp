#include <iostream>
using namespace std;

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{2, 0}, {1, 2}};
    int mul[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Multiplication Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }
    return 0;
}
