#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;

bool search(int v, set<int>& s, int p = -1) {
	if (v == 0) {
		return true;
	}

	bool root = false;
	for (int i = 0; i < g[v].size(); ++i) {
		int to = g[v][i];
		if (to != p && search(to, s, v)) {
			root = true;
			break;
		}
	}

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
	vector<bool> rootNeighbors(n, false);
	rootNeighbors[0] = true;
	for (int i = 0; i < n - 1; ++i) {
		int u, v;
		cin >> u >> v;
		--u;
		--v;

		g[u].push_back(v);
		g[v].push_back(u);

		if (u == 0) {
			rootNeighbors[v] = true;
		}

		if (v == 0) {
			rootNeighbors[u] = true;
		}
	}

	vector<set<int>*> p;
	for (int i = 1; i < n; ++i) {
		if (g[i].size() == 1) {
			set<int>* s = new set<int>();
			search(i, *s);
			p.push_back(s);
		}
	}

	vector<int> v(n);
	for (int i = 0; i < m; ++i) {
		int k;
		cin >> k;

		for (int j = 0; j < k; ++j) {
			int vi;
			cin >> vi;
			--vi;
			v[j] = vi;
		}

		bool ans;
		for (set<int>* s : p) {
			ans = true;
			for (int j = 0; j < k; ++j) {
				if (s->find(v[j]) == s->end() && !rootNeighbors[v[j]]) {
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
	