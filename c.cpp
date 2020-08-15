#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		ll s = 0;
		ll ans = 0;
		int m = 8 * n + 1;
		vector<ll> b(m, 0);
		++b[0];
		for (int i = 1; i <= n; ++i) {
			char c;
			cin >> c;
			ll a = c - '0';

			s += a;
			ll d = (s - i + m) % m;
			++b[d];
			ans += b[d] - 1;
		}

		cout << ans << endl;
	}
	
	return 0;
}
