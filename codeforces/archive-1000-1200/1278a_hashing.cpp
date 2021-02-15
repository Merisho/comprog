#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string p, h;
		cin >> p >> h;

		int pl = p.length();
		int hl = h.length();
		if (hl < pl) {
			cout << "NO" << endl;
			continue;
		}

		int c[26];
		for (int i = 0; i < 26; ++i) {
			c[i] = 0;
		}

		for (char cp : p) {
			++c[cp - 'a'];
		}

		bool v;
		for (int i = 0; i <= hl - pl; ++i) {
			int ch[26];
			for (int ii = 0; ii < 26; ++ii) {
				ch[ii] = 0;
			}

			v = true;
			for (int j = i; j < i + pl; ++j) {
				int hh = h[j] - 'a';
				++ch[hh];
				if (ch[hh] > c[hh]) {
					v = false;
					break;
				}
			}

			if (v) {
				break;
			}
		}

		if (v) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	