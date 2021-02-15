#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		map<char, pair<int, int>> c = {
			{'L', {-1, 0}},
			{'R', {1, 0}},
			{'U', {0, 1}},
			{'D', {0, -1}},
		};
		map<pair<int, int>, int> v;
		int md = INF;
		int s = -1;
		int x = 0;
		int y = 0;
		v[{x, y}] = 0;
		for (int i = 1; i < n + 1; ++i) {
			char m;
			cin >> m;

			x += c[m].first;
			y += c[m].second;

			if (v.find({x, y}) != v.end()) {
				int d = i - v[{x, y}];
				if (md > d) {
					md = d;
					s = v[{x, y}] + 1;
				}
			}

			v[{x, y}] = i;
		}

		if (s == -1) {
			cout << s;
		} else {
			cout << s << " " << (s + md - 1);
		}

		cout << endl;
	}
	
	return 0;
}
	