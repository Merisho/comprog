#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>> g;
set<int> ind;
vector<int> vis;
 
void independent(int v, int k) {
	if (ind.size() == k) {
		return;
	}

	ind.clear();

	queue<pair<int, bool>> q;
	q.push({v, true});

	while (!q.empty()) {
		pair<int, bool> vv = q.front();
		q.pop();
		v = vv.first;

		vis[v] = true;

		bool pick = vv.second;
		for (int u : g[v]) {
			if (ind.find(u) != ind.end()) {
				pick = false;
			}

			if (!vis[u]) {
				q.push({u, !vv.second});
			}
		}

		if (pick) {
			ind.insert(v);
		}

		if (ind.size() == k) {
			return;
		}
	}
}
 
vector<int> path;
vector<int> findCycle(int v, int p, int k) {
	if (vis[v] == 1) {
		vector<int> cycle;
		int ancestor = p;
		while (ancestor != v) {
			cycle.push_back(ancestor);
			ancestor = path[ancestor];
		}
 
		cycle.push_back(v);
 
		if (cycle.size() > k) {
			cycle.clear();
		}
 
		return cycle;
	}
 
	vis[v] = 1;
	path[v] = p;
 
	for (int u : g[v]) {
		if (u != p && vis[u] != 2) {
			vector<int> c = findCycle(u, v, k);
			if (c.size() > 0) {
				return c;
			}
		}
	}
 
	vis[v] = 2;

	return vector<int>();
}
 
int main() {
	int n, m, k;
	cin >> n >> m >> k;
 
	g = vector<vector<int>>(n);
	vis = vector<int>(n, 0);
 
	int mn = 1e9;
	int r;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
 
		--u;
		--v;
 
		g[u].push_back(v);
		g[v].push_back(u);

		if (g[u].size() < mn) {
			mn = g[u].size();
			r = u;
		}

		if (g[v].size() < mn) {
			mn = g[v].size();
			r = v;
		}
	}
 
	int indNum = (k + 1) / 2;
	independent(r, indNum);
	independent(g[r][0], indNum);
	if (ind.size() == indNum) {
		cout << 1 << endl;
		for (int i : ind) {
			cout << (i + 1) << " ";
		}
		return 0;
	}
 
	vis = vector<int>(n, 0);
	path = vector<int>(n);
 
	vector<int> cycle = findCycle(0, 0, k);
	reverse(cycle.begin(), cycle.end());
 
	cout << 2 << endl;
	cout << cycle.size() << endl;
	for (int ci : cycle) {
		cout << (ci + 1) << " ";
	}
	
	return 0;
}