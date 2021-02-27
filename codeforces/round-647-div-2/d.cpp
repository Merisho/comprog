#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> g;
vector<int> t;
vector<bool> vis;

int main() {
	int n, m;
	cin >> n >> m;

	g = vector<vector<int>>(n);
	vis = vector<bool>(n, false);

	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;

		--a;
		--b;

		g[a].push_back(b);
		g[b].push_back(a);
	}

	vector<pair<int, int>> tt(n);
	for (int i = 0; i < n; ++i) {
		int ti;
		cin >> ti;

		t.push_back(ti);
		tt[i] = {ti, i};
	}

	sort(tt.begin(), tt.end());

	vector<int> vc(n + 1, 0);
	bool ok = true;
	for (int i = 0; i < n; ++i) {
		int k = 0;
		for (int v : g[tt[i].second]) {
			if (t[v] == tt[i].first) {
				ok = false;
				break;
			}

			++k;
		}

		if (tt[i].first < k) {
			ok = false;
			break;
		}
	}

	if (!ok) {
		cout << -1;
		return 0;
	}

	for (int i = 0; i < n; ++i) {
		cout << (tt[i].second + 1) << " ";
	}
	
	return 0;
}
