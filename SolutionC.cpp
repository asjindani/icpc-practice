#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int divide(int a, int b) {
    return (a + b - 1) / b;
} 

int main() {
    int t, n;
    cin >> t;

    vector<int> moves(t);

    for (int i = 0; i < t; i++) {
        int x, y, k;
        cin >> x >> y >> k;
        
        int a = 0, b = 0;
        bool xdirection = true;
        int moveCount = 0;
        int xMoves = max(divide(x,k), divide(y,k));
        int yMoves = max(divide(y,k), divide(x,k)-1);
        moveCount = xMoves + yMoves;

        moves[i] = moveCount;
    }

    for (int x : moves)
        cout << x << endl;

    return 0;
}