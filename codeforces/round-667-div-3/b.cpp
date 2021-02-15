#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;

		ll m1 = max(a - n, x);
		ll m2 = max(b - n, y);
		ll d = n - a + m1 - b + m2;
		ll ans = m1 * m2;
		if (d < 0) {
			d = -d;
			ans = min((m1 + d) * m2, (m2 + d) * m1);
		}

		cout << ans << endl;
	}
	
	return 0;
}
