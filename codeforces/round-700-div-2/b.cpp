#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll A, B, n;
		cin >> A >> B >> n;

		vector<ll> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		ll dmg = 0;
		for (int i = 0; i < n; ++i) {
			ll b;
			cin >> b;

			ll d = (b + A - 1) / A * a[i];
			dmg += d;
		}

		bool ok = false;
		for (int i = 0; i < n; ++i) {
			if (B - (dmg - a[i]) > 0) {
				ok = true;
			}
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
