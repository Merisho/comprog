#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> a(n);
		for (ll& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		ll pp = 0;
		ll p = a[0];
		ll ans = p;
		for (int i = 1; i < n; ++i) {
			ll mn = min(p, a[i] - pp);
			ans = max(ans, mn);

			pp += p;
			p = a[i] - pp;
		}

		ans = max(ans, p);

		cout << ans << endl;
	}
	
	return 0;
}
