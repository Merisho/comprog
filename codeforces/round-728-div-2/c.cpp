#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> d(n);
		for (ll& di : d) {
			cin >> di;
		}

		sort(d.begin(), d.end());
		
		ll ans = 0;
		ll s = 0;
		for (ll i = 1; i < n; ++i) {
			ans += d[i] * (i - 1) - (s - d[i - 1]);
			s += d[i];
		}

		cout << -ans << endl;
	}
	
	return 0;
}
