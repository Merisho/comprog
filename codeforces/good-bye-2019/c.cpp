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
		ll x = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			s += a;
			x ^= a;
		}

		cout << 2 << endl;
		cout << x << " " << (s + x) << endl;
	}
	
	return 0;
}
