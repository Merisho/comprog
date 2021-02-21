#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> w(n);
		ll s = 0;
		for (int i = 0; i < n; ++i) {
			cin >> w[i];
			s += w[i];
		}

		vector<int> c(n, 0);
		for (int i = 0; i < n - 1; ++i) {
			int u, v;
			cin >> u >> v;

			--u;
			--v;

			++c[u];
			++c[v];
		}

		vector<pair<ll, int>> cc;
		for (int i = 0; i < n; ++i) {
			if (c[i] > 1) {
				cc.push_back({w[i], c[i] - 1});
			}
		}

		sort(cc.begin(), cc.end());

		int j = cc.size() - 1;
		cout << s << " ";

		for (int i = 2; i < n; ++i) {
			if (j < 0) {
				cout << s << " ";
				continue;
			}

			s += cc[j].first;
			--cc[j].second;

			if (cc[j].second == 0) {
				--j;
			}

			cout << s << " ";
		}

		cout << endl;
	}
	
	return 0;
}
