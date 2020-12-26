#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cycles;
vector<bool> mark;
vector<bool> pmark;
vector<vector<int>> g;

void dfs(int node) {
    if (pmark[node]) {
      return;
    }
    if (mark[node]) {
      cycles++;
      return;
    }
    mark[node] = true;

    // Try all outgoing edges.
    for (int neighbour : g[node]) {
      dfs(neighbour);
    }

    pmark[node] = true;
    mark[node] = false;
  }

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		cycles = 0;
		mark = vector<bool>(n + 1);
		pmark = vector<bool>(n + 1);

		g = vector<vector<int>>(n + 1);
		int ans = m;
		for (int i = 0; i < m; ++i) {
			int x, y;
			cin >> x >> y;
			
			if (x != y) {
				g[x].push_back(y);
			} else {
				--ans;
			}
		}

		for (int i = 1; i <= n; ++i) {
			dfs(i);
		}

		cout << (ans + cycles) << endl;
	}
	
	return 0;
}