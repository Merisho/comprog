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

		ll ans = 1;
		for (int i = 1; i <= 5; ++i) {
			ans *= a[n - i];
		}

		ans = max(ans, a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3]);
		ans = max(ans, a[0] * a[1] * a[2] * a[3] * a[n - 1]);

		cout << ans << endl;
	}
	
	return 0;
}
