// Problem URL: https://codeforces.com/problemset/problem/1352/C
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

void solve(int test_case) {
	ll n, k;

    cin >> n >> k;

    ll d = n - 1;
    ll ans = n * (k / d) - 1;
    if (k % d > 0) {
        ans += 1 + k % d;
    }

    cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1352c_k-th_not_divisible_by_n_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
