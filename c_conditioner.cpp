#include <bits/stdc++.h>
using namespace std;

int main() {
	int Q;
	cin >> Q;

	for (int q = 0; q < Q; ++q) {
		int n, m;
		cin >> n >> m;

		vector<int[3]> c(n);
		for (int i = 0; i < n; ++i) {
			int t, l, h;
			cin >> t >> l >> h;

			c[i][0] = t;
			c[i][1] = l;
			c[i][2] = h;
		}

		bool ans = true;
		int tp = 0;
		int lp = m;
		int hp = m;
		for (int i = 0; i < n; ++i) {
			int t = c[i][0];
			int l = c[i][1];
			int h = c[i][2];

			int j = i + 1;
			while (j < n && t == c[j][0]) {
				l = max(l, c[j][1]);
				h = min(h, c[j][2]);
				if (l > h) {
					ans = false;
					break;
				}

				i = j;
				++j;
			}

			if (!ans) {
				break;
			}

			int d = t - tp;
			int a = hp + d;
			int b = lp - d;

			if (min(h, a) < max(l, b)) {
				ans = false;
				break;
			}

			lp = max(l, b);
			hp = min(h, a);
			tp = t;
		}

		if (ans) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	