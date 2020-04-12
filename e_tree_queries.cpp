#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> u;

bool search(int v, set<int>& s) {
	if (v == 0) {
		for (int i = 0; i < g[0].size(); ++i) {
			s.insert(g[0][i]);
		}
		return true;
	}

	u[v] = true;
	bool root = false;
	for (int i = 0; i < g[v].size(); ++i) {
		int to = g[v][i];
		if (!u[to] && search(to, s)) {
			root = true;
			break;
		}
	}
	u[v] = false;

	if (!root) {
		return false;
	}

	for (int i = 0; i < g[v].size(); ++i) {
		s.insert(g[v][i]);
	}
	return true;
}

int main() {
	int n, m;
	cin >> n >> m;

	g = vector<vector<int>>(n);

	for (int i = 0; i < n - 1; ++i) {
		int u, v;
		cin >> u >> v;
		--u;
		--v;

		g[u].push_back(v);
		g[v].push_back(u);
	}

	vector<set<int>> p(n);
	for (int i = 1; i < n; ++i) {
		u = vector<bool>(n, false);
		set<int> s;
		search(i, s);
		p[i] = s;
	}

	for (int i = 0; i < m; ++i) {
		int k;
		cin >> k;

		vector<int> v(k);
		for (int& vi : v) {
			cin >> vi;
			--vi;
		}

		bool ans;
		for (int j = 1; j < n; ++j) {
			ans = true;
			for (int vi : v) {
				if (p[j].find(vi) == p[j].end()) {
					ans = false;
					break;
				}
			}

			if (ans) {
				break;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
	