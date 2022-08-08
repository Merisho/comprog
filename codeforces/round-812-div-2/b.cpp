#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

void solve(int test_case) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int& ai : a) {
        cin >> ai;
    }

    bool ans = true;
    int mx = a[0];
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] < mx && a[i] < a[i + 1]) {
            ans = false;
            break;
        }

        mx = max(mx, a[i]);
    }

    cout << (ans ? "YES" : "NO") << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
