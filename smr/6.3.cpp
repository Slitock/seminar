#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    
    long long rects = (N * (N + 1) / 2) * (M * (M + 1) / 2);
    cout << rects << endl;
    
    return 0;
}
