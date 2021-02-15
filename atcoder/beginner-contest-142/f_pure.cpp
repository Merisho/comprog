#include <bits/stdc++.h>
using namespace std;

bool g[1000][1000];
bool visited[1000];
vector<int> res;

void find_cycle(int n, int start, vector<int>& path) {
	visited[start] = true;
	path.push_back(start);
	
	for (int dest = 0; dest < n; ++dest) {
		if (g[start][dest] && dest == path[0] && path.size() > 1 && (res.empty() || path.size() < res.size())) {
			res = path;
		} else if (g[start][dest] && !visited[dest]) {
			find_cycle(n, dest, path);
		}
	}

	path.pop_back();
}

int main() {
	memset(g, false, sizeof(g));

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		g[a - 1][b - 1] = true;
	}

	for (int i = 0; i < n; ++i) {
		memset(visited, false, sizeof(visited));
		vector<int> p;
		find_cycle(n, i, p);
	}

	if (res.empty()) {
		cout << -1;
		return 0;
	}

	cout << res.size() << endl;
	for (int c : res) {
		cout << c + 1 << endl;
	}
	
	return 0;
}
