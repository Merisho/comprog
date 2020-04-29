#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> scores;

int count_scores(int v, int p, int l) {
	int vc = 0;
	for (int child : g[v]) {
		if (child != p) {
			vc += count_scores(child, v, l + 1) + 1;
		}
	}

	scores.push_back(l - vc);
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

	count_scores(0, -1, 0);

	sort(scores.begin(), scores.end());

	long long ans = 0;
	for (int i = n - 1; i > n - 1 - k; --i) {
		ans += scores[i];
	}

	cout << ans;
	
	return 0;
}
	