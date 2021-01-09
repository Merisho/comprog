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

		sort(a.begin(), a.end(), greater<ll>());

		ll s = 0;
		for (int i = 0; i < n; ++i) {
			ll ai = a[i];
			if (i % 2 == 0 && a[i] % 2 == 0) {
				s += a[i];
			} else if (i % 2 == 1 && a[i] % 2 == 1) {
				s -= a[i];
			}
		}

		if (s == 0) {
			cout << "Tie";
		} else if (s > 0) {
			cout << "Alice";
		} else {
			cout << "Bob";
		}

		cout << endl;
	}
	
	return 0;
}