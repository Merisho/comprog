#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a, b, k;
		cin >> a >> b >> k;

		vector<int> aa(a + 1, 0);
		vector<pair<int, int>> p(k);
		for (int i = 0; i < k; ++i) {
			int a;
			cin >> a;
			p[i].first = a;
			++aa[a];
		}
	
		vector<int> bb(b + 1, 0);
		for (int i = 0; i < k; ++i) {
			int b;
			cin >> b;
			p[i].second = b;
			++bb[b];
		}

		ll ans = 0;
		for (int i = 0; i < k; ++i) {
			ans += ll(k - aa[p[i].first] - bb[p[i].second] + 1);
		}

		ans /= 2;

		cout << ans << endl;
	}

	return 0;
}
