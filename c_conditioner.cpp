#include <bits/stdc++.h>
using namespace std;

int main() {
	int Q;
	cin >> Q;

	for (int q = 0; q < Q; ++q) {
		int n, m;
		cin >> n >> m;

		int pt = 0;
		int pl = m;
		int ph = m;
		bool ans = true;
		for (int i = 0; i < n; ++i) {
			int t, l, h;
			cin >> t >> l >> h;

			if (!ans) {
				continue;
			}

			int d1 = h - pl;
			int d2 = l - ph;
			int dt = t - pt;

			if (dt < min(abs(d1), abs(d2)) && ((d1 > 0 && d2 > 0) || (d1 < 0 && d2 < 0))) {
				ans = false;
			}

			pl = l;
			ph = h;
			pt = t;
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
	