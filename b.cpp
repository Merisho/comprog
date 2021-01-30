#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, k;
		cin >> n >> k;

		vector<ll> p(n);
		for (ll& pi : p) {
			cin >> pi;
		}

		ll ps = p[0];
		ll ans = 0;
		for (int i = 1; i < n; ++i) {
			if (p[i] * 100 > ps * k) {
				ll d = (p[i] * 100 + k - 1) / k;
				ans += d - ps;
				ps = d;
			}

			ps += p[i];
		}

		cout << ans << endl;
	}
	
	return 0;
}
