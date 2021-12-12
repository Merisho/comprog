#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N = 2 * 1e5 + 7;

vector<int> msb(N);
vector<vector<int>> g(N);
vector<int> nodes_by_color[2];

void calc_msb() {
	int bits = 1;
	int cnt = 1;
	int nxt_cnt = 2;
	for(int i = 1; i < N; i++)
	{
		msb[i] = bits;
		cnt--;
		if(cnt == 0) {
			cnt = nxt_cnt;
			bits++;
			nxt_cnt *= 2;
		}
	}
}

void color(int v, int p, int c) {
	nodes_by_color[c].push_back(v);
	for (int u : g[v]) {
		if (u != p) {
			color(u, v, c ^ 1);
		}
	}
}

int main() {
	int T;
	cin >> T;

	calc_msb();

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		for (int i = 1; i <= n; ++i) {
			g[i].clear();
		}
		
		for (int i = 1; i < n; ++i) {
			int u, v;
			cin >> u >> v;

			g[u].push_back(v);
			g[v].push_back(u);
		}

		color(1, 0, 0);

		vector<vector<int>> nodes_by_msb(20);
		for (int i = 1; i <= n; ++i) {
			nodes_by_msb[msb[i]].push_back(i);
		}

		vector<int> ans(n + 1);
		for (int i = 19; i >= 0; --i) {
			int clr = 0;
			if (nodes_by_color[clr ^ 1].size() > nodes_by_color[clr].size()) {
				clr ^= 1;
			}

			for (int v : nodes_by_msb[i]) {
				int node = nodes_by_color[clr].back();
				nodes_by_color[clr].pop_back();
				ans[node] = v;
			}
		}

		for (int i = 1; i <= n; ++i) {
			cout << ans[i] << " ";
		}

		cout << endl;
	}
	
	return 0;
}
