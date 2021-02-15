#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int a, b, c;
		cin >> a >> b >> c;

		map<char, int> B = {
			{'R', 0},
			{'P', 0},
			{'S', 0}
		};
		string s;
		for (int i = 0; i < n; ++i) {
			char c;
			cin >> c;

			s += c;
			++B[c];
		}

		int ma = min(B['S'], a);
		int mb = min(B['R'], b);
		int mc = min(B['P'], c);
		int w = ma + mb + mc;
		if (w * 2 < n) {
			cout << "NO" << endl;
			continue;
		}

		cout << "YES" << endl;

		vector<char> r(n, '0');
		int ka = 0;
		for (int i = 0; i < n && ka < ma; ++i) {
			if (s[i] == 'S') {
				++ka;
				r[i] = 'R';
			}
		}

		int kb = 0;
		for (int i = 0, kb = 0; i < n && kb < mb; ++i) {
			if (s[i] == 'R') {
				++kb;
				r[i] = 'P';
			}
		}

		int kc = 0;
		for (int i = 0, kc = 0; i < n && kc < mc; ++i) {
			if (s[i] == 'P') {
				++kc;
				r[i] = 'S';
			}
		}

		for (int i = 0; i < n; ++i) {
			if (r[i] == '0') {
				if (ka < a) {
					r[i] = 'R';
					++ka;
				} else if (kb < b) {
					r[i] = 'P';
					++kb;
				} else {
					r[i] = 'S';
					++kc;
				}
			}

			cout << r[i];
		}

		cout << endl;
	}
	
	return 0;
}
	