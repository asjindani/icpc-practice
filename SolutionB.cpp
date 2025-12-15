#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    const int COLS = 4;

    vector<vector<int>> beatmap(t);
    
    for (size_t i = 0; i < t; i++) {
        vector<int> v;
        cin >> n;
        for (size_t j = 0; j < n; j++) {
            string row;
            cin >> row;
            for (size_t k = 0; k < COLS; k++) {
                if (row[k] == '#') {
                    v.push_back(k+1);
                }
            }
        }
        reverse(v.begin(), v.end());
        beatmap[i] = v;
    }

    for (const auto& v : beatmap) {
        for (int i : v)
            cout << i << ' ';
        cout << endl;
    }

    return 0;
}