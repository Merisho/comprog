#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<pair<int, int>> c(n);
		for (int i = 0; i < n; ++i) {
			int x, y;
			cin >> x >> y;
			c[i] = { x, y };
		}

		sort(c.begin(), c.end());

		bool possible = true;
		for (int i = 1; i < n; ++i) {
			int y1 = c[i - 1].second;
			int y2 = c[i].second;
			if (y2 < y1) {
				possible = false;
				break;
			}
		}

		if (!possible) {
			cout << "NO" << endl;
			continue;
		}

		int rx = 0;
		int ry = 0;
		string ans;
		for (int i = 0; i < n; ++i) {
			pair<int, int> p = c[i];
			int x = p.first;
			int y = p.second;
			ans += string(x - rx, 'R') + string(y - ry, 'U');
			rx = x;
			ry = y;
		}

		cout << "YES" << endl;
		cout << ans << endl;
	}
	
	return 0;
}
	