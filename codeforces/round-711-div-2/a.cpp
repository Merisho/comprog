#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll d(ll n) {
	ll s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}

	return s;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n;
		cin >> n;

		ll ans = 0;
		while (ans == 0) {
			ll ds = d(n);

			for (ll k = 2; k <= ds; ++k) {
				if (n % k == 0 && ds % k == 0) {
					ans = n;
					break;
				}
			}

			++n;
		}

		cout << ans << endl;
	}
	
	return 0;
}
