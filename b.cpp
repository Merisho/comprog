#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, x, m;
		cin >> n >> x >> m;

		int ml = x;
		int mr = x;
		for (int i = 0; i < m; ++i) {
			int l, r;
			cin >> l >> r;

			if (max(ml, l) <= min(mr, r)) {
				ml = min(ml, l);
				mr = max(mr, r);
			}
		}

		cout << (mr - ml + 1) << endl;
	}
	
	return 0;
}
	