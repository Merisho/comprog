#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll x, n;
		cin >> x >> n;

		ll diff = 0;

		ll m = (n % 4LL);
		if (m == 3) {
			diff = n + 1LL;
		} else if (m == 2) {
			diff = 1;
		} else if (m == 1) {
			diff = -n;
		} else {
			diff = 0;
		}

		if (abs(x % 2LL) == 1) {
			diff = -diff;
		}

		ll ans = x + diff;
		cout << ans << endl;
	}
	
	return 0;
}
