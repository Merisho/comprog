#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, x, t;
		cin >> n >> x >> t;

		if (t >= n * x) {
			cout << (n * (n - 1) / 2) << endl;
			continue;
		}

		ll k = t / x;
		ll ans = k * (n - k - 1) + (k * (k + 1)) / 2;
		cout << ans << endl;
	}
	
	return 0;
}
