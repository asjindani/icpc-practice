#include <iostream>
#include <vector>
#include <climits>
using namespace std;

inline long long SumInt(long long a, long long b) {
    return (b - a + 1) * (a + b) / 2;
}

inline long long Sum1(long long i, long long k) {
    return i * (k + k+i-1) / 2;
}

inline long long Sum2(long long i, long long k, long long n) {
    return (n-i) * (k+i + k+n-1) / 2;
}

int main() {
    int t;
    cin >> t;

    vector<long long> results(t);

    for (long long x = 0; x < t; x++) {
        long long n, k;
        cin >> n >> k;

        long long i, lower = 1, upper = n, lhs, rhs, minVal = LONG_LONG_MAX;

        do {
            i = lower + (upper - lower) / 2;
            lhs = Sum1(i, k);
            rhs = Sum2(i, k, n);
            minVal = min(minVal, abs(lhs-rhs));
            if (lhs == rhs)
                break;
            else if (lhs < rhs)
                lower = i + 1;
            else
                upper = i - 1;
        } while (lower <= upper);

        results[x] = minVal;
    }

    for (const auto& result : results)
        cout << result << endl;

    return 0;
}