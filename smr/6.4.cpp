#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<bool> free(55, false); 
    for (int i = 0; i < N; i++) {
        int seat;
        cin >> seat;
        free[seat] = true;
    }

    vector<vector<int>> kupe(10); 
    for (int k = 1; k <= 9; k++) {
        int start_left = (k - 1) * 4 + 1;
        for (int s = 0; s < 4; s++) {
            kupe[k].push_back(start_left + s);
        }
    }
    int side_seats[9][2] = {
        {53, 54},
        {51, 52},
        {49, 50},
        {47, 48},
        {45, 46},
        {43, 44},
        {41, 42},
        {39, 40},
        {37, 38}
    };
    for (int k = 1; k <= 9; k++) {
        kupe[k].push_back(side_seats[k - 1][0]);
        kupe[k].push_back(side_seats[k - 1][1]);
    }

    vector<bool> kupe_free(10, true);
    for (int k = 1; k <= 9; k++) {
        for (int seat : kupe[k]) {
            if (!free[seat]) {
                kupe_free[k] = false;
                break;
            }
        }
    }

    int max_len = 0;
    int current_len = 0;
    for (int k = 1; k <= 9; k++) {
        if (kupe_free[k]) {
            current_len++;
            max_len = max(max_len, current_len);
        } else {
            current_len = 0;
        }
    }

    cout << max_len << endl;
    return 0;
}
