#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		vector<pair<int, int>> r;
		set<int> ox;
		set<int> oy;
		queue<int> q;
		for (int i = 0; i < m; ++i) {
			int x, y;
			cin >> x >> y;

			ox.insert(x);
			oy.insert(y);
			r.push_back({ x, y });
			
			if (x != y) {
				q.push(i);
			}
		}
	}
	
	return 0;
}
