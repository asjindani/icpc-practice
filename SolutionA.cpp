#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < n; i++)
        cout << b[i] - a[i] << endl;

    return 0;
}