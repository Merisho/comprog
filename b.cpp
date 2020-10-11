#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<ll> a(n);
		for (ll& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		ll ans = a[n - 1];
		for (int i = 1; i <= k; ++i) {
			ans += a[n - 1 - i];
		}

		cout << ans << endl;
	}
	
	return 0;
}
