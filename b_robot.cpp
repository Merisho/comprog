#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;

	for (int i = 0; i < q; ++i) {
		string s;
		cin >> s;

		int u = 0;
		int d = 0;
		int l = 0;
		int r = 0;
		for (int i = 0; i < s.length(); ++i) {
			switch (s[i]) {
				case 'U':
					++u;
					break;
				case 'D':
					++d;
					break;
				case 'L':
					++l;
					break;
				case 'R':
					++r;
					break;
			}
		}

		u = min(u, d);
		d = u;

		l = min(l, r);
		r = l;

		if (u == 0 && l > 1) {
			l = 1;
			r = 1;
		}

		if (l == 0 && u > 1) {
			u = 1;
			d = 1;
		}

		cout << u + d + l + r << endl;
		for (int i = 0; i < u; ++i) {
			cout << 'U';
		}

		for (int i = 0; i < l; ++i) {
			cout << 'L';
		}

		for (int i = 0; i < d; ++i) {
			cout << 'D';
		}

		for (int i = 0; i < r; ++i) {
			cout << 'R';
		}

		cout << endl;
	}
	
	return 0;
}
	