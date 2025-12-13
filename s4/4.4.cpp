#include <iostream>

using namespace std;

void Random(int m, int i, int c, int count = 5, int s_0 = 0) {
    int s_curr = s_0;
    
    cout << "Параметры: m=" << m << ", i=" << i << ", c=" << c << endl;
    for (int j = 0; j < count; j++) {
        cout << "s_" << j << " = " << s_curr << endl;
        s_curr = (m * s_curr + i) % c;
    }
}

int main() {
    Random(37, 3, 64, 100, time(nullptr));
    cout << endl;
    
    Random(25173, 13849, 65537, 5);
    cout << endl;

    return 0;
}
