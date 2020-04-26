#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<pair<int, int>> children;
map<int, bool> excluded_children;

int count_children(int v, int p) {
	int vc = 0;
	for (int child : g[v]) {
		if (child != p) {
			vc += count_children(child, v) + 1;
		}
	}

	children.push_back({vc, v});
	return vc;
}

int count_ex_children(int v, int p, int l = 1) {
	int vc = 0;

	for (int child : g[v]) {
		if (child == p) {
			continue;
		}

		if (excluded_children[child]) {
			vc += l;
		} else {
			vc += count_ex_children(child, v, l + 1);
		}
	}

	return vc;
}

int main() {
	int n, k;
	cin >> n >> k;

	g = vector<vector<int>>(n);
	for (int i = 0; i < n - 1; ++i) {
		int u, v;
		cin >> u >> v;
		--u;
		--v;

		g[u].push_back(v);
		g[v].push_back(u);
	}

	count_children(0, -1);

	sort(children.begin(), children.end());

	for (int i = 0; i < k; ++i) {
		excluded_children[children[i].second] = true;
	}

	int ans = count_ex_children(0, -1);

	cout << ans;
	
	return 0;
}
	