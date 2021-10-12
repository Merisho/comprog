#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, h;
		cin >> n >> h;

		vector<ll> a(n);
		for (ll& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		ll x = a[n - 1];
		ll y = a[n - 2];
		ll s = x + y;
		if (h % s == 0) {
			cout << (2 * (h / s));
		} else if (h % s <= x) {
			cout << (2 * (h / s) + 1);
		} else {
			cout << (2 * (h / s) + 2);
		}

		cout << endl;
	}
	
	return 0;
}
