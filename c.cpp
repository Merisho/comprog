#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	vector<int> a(6);
	for (int i = 0; i < 6; ++i) {
		cin >> a[i];
	}

	int n;
	cin >> n;

	vector<pair<int, int>> p;
	for (int i = 0; i < n; ++i) {
		int bi;
		cin >> bi;

		for (int j = 0; j < 6; ++j) {
			p.push_back({ bi - a[j], i });
		}
	}

	sort(p.begin(), p.end());

	int ans = 1e9;
	vector<int> ct(n, 0);
	int u = 0;
	for (int l = 0, r = 0; l < p.size(); ++l) {
		while (r < p.size() && u < n) {
			if (ct[p[r].second] == 0) {
				++u;
			}

			++ct[p[r].second];
			++r;
		}

		if (u == n) {
			ans = min(ans, p[r - 1].first - p[l].first);
		}

		--ct[p[l].second];
		if (ct[p[l].second] == 0) {
			--u;
		}
	}
	
	cout << ans;
	
	return 0;
}