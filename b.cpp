#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k, z;
		cin >> n >> k >> z;

		vector<int> a(n);
		cin >> a[0];

		vector<int> p(n);
		p[0] = a[0];
		for (int i = 1; i < n; ++i) {
			cin >> a[i];
			p[i] = p[i - 1] + a[i];
		}

		vector<pair<int, int>> pp;
		for (int i = 0; i < k; ++i) {
			int s = a[i] + a[i + 1];
			pp.push_back({s, i + 1});
		}

		int ans = p[k];
		for (pair<int, int> ppi : pp) {
			int r = ppi.second;
			int d = k - r;
			if (d <= 2 * z) {
				int s = ppi.first * (d / 2) + a[r - 1] * (d % 2);
				ans = max(ans, p[r] + s);
			} else {
				ans = max(ans, ppi.first * z + p[k - 2 * z]);
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
