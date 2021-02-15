#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll c(ll cc) {
	return (cc * (cc - 1) * (cc - 2)) / 6;
}

ll pairs(ll cc) {
	return ((cc - 1) * cc) / 2;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> cc(n + 3, 0);
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			++cc[a];
		}

		ll ans = 0;
		for (int i = 1; i <= n; ++i) {
			ans += c(cc[i]) + cc[i] * (pairs(cc[i + 1]) + pairs(cc[i + 2])) + pairs(cc[i]) * (cc[i + 1] + cc[i + 2]) + cc[i] * cc[i + 1] * cc[i + 2];
		}

		cout << ans << endl;
	}
	
	return 0;
}
