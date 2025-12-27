#include <iostream>
using namespace std;

int main() {
    long long M;
    cin >> M;

    long long r = M % 3;
    
    long long y = r;
    long long x = (M - 4 * y) / 3;
    if (x >= 0 && (M - 4 * y) % 3 == 0) {
        cout << x << " " << y << endl;
        return 0;
    }
    
    y = r + 3;
    x = (M - 4 * y) / 3;
    if (x >= 0 && (M - 4 * y) % 3 == 0) {
        cout << x << " " << y << endl;
        return 0;
    }
    
    cout << "0 0" << endl;
    return 0;
}
