#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		ll s[2] = {0, 0};
		vector<ll> a(n + 1);
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];

			s[i % 2] += a[i];
		}

		ll ss = s[0] + s[1];

		if (s[0] <= ss / 2) {
			for (int i = 1; i <= n; ++i) {
				cout << (i % 2 == 0 ? 1 : a[i]) << " ";
			}
		} else {
			for (int i = 1; i <= n; ++i) {
				cout << (i % 2 == 1 ? 1 : a[i]) << " ";
			}
		}

		cout << endl;
	}
	
	return 0;
}
