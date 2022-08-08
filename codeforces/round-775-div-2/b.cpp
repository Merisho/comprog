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

    ll s = 0;
    ll mx = 0;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;

        mx = max(mx, a);
        s += a;
    }

    if (s == 0) {
        cout << 0 << endl;
        return;
    }

    if (2 * mx <= s) {
        cout << 1;
    } else {
        cout << (2 * mx - s);
    }

    cout << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
