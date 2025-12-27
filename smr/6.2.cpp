#include <iostream>
using namespace std;

int main() {
    long long M;
    cin >> M;

    // Ищем y = M % 3
    long long y = M % 3;
    long long x = (M - 4 * y) / 3;

    if (x >= 0 && (M - 4 * y) % 3 == 0) {
        cout << x << " " << y << endl;
    } else {
        y = M % 3 + 3;
        x = (M - 4 * y) / 3;
        if (x >= 0 && (M - 4 * y) % 3 == 0) {
            cout << x << " " << y << endl;
        } else {
            cout << "0 0" << endl;
        }
    }
    return 0;
}
