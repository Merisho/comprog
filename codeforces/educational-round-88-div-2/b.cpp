#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;

		char a[n][m];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> a[i][j];
			}
		}

		long long s = 0;
		for (int i = 0; i < n; ++i) {
			char p = '*';
			for (int j = 0; j < m; ++j) {
				char c = a[i][j];
				if (c == '.') {
					if (p == '.') {
						s += min(2 * x, y);
						p = '*';
					} else {
						p = c;
					}
				} else if (p == '.') {
					s += x;
					p = '*';
				}
			}

			if (p == '.') {
				s += x;
			}
		}

		cout << s << endl;
	}
	
	return 0;
}
	