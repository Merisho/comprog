#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		
		cin >> n >> k;
	
		vector<ll> m(k);
		for (ll& mi : m) {
			cin >> mi;
		}

		sort(m.begin(), m.end());

		int i = k - 1;
		ll c = 0;
		while (i >= 0 && c < m[i]) {
			c += n - m[i];
			--i;
		}

		cout << (k - i - 1) << endl;
	}
	
	return 0;
}
