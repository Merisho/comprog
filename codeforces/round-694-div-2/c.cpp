#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		vector<int> k(n);
		for (int& ki : k) {
			cin >> ki;
			--ki;
		}

		priority_queue<ll, vector<ll>, greater<ll>> q;
		vector<ll> c(m);
		for (ll& ci : c) {
			cin >> ci;
			q.push(ci);
		}

		sort(k.begin(), k.end());
		ll ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += c[k[i]];
		}

		for (int i = 0; i < n; ++i) {
			ll a = q.top();
			q.pop();
			ans = min(ans, ans + a - c[k[i]]);
			q.push(c[k[i]]);
		}

		cout << ans << endl;
	}
	
	return 0;
}
