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

    vector<ll> a(n);
    for (ll& ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());

    int b = 1;
    int r = n - 1;
    ll sb = a[0] + a[1];
    ll sr = a[r];

    while (b < r) {
        if (sr > sb) {
            cout << "YES" << endl;
            return;
        }

        ++b;
        sb += a[b];
        --r;
        sr += a[r];
    }

    cout << "NO" << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
