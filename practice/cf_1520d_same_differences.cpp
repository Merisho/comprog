// Problem URL: https://codeforces.com/problemset/problem/1520/D
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;

void solve(int test_case) {
	// a[j] - a[i] == j - i
    // a[j] - j == a[i] - i

    int n;
    cin >> n;

    vector<ll> d(2 * n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;

        ++d[a - i + n];
    }

    ll ans = 0;
    for (ll di : d) {
        ans += (di * (di - 1LL)) / 2LL;
    }

    cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1520d_same_differences_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
