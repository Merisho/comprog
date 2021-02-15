#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> p(n);
		int m;
		for (int i = 0; i < n; ++i) {
			cin >> p[i];
			if (p[i] == n) {
				m = i;
			}
		}

		vector<int> l;
		bool b = false;
		for (int i = m - 1; i >= 0; --i) {
			if ((b && p[i] < p[i + 1]) || (!b && p[i] > p[i + 1])) {
				l.push_back(p[i + 1]);
				b = !b;
			}
		}

		if (m != 0) {
			l.push_back(p[0]);
		}

		reverse(l.begin(), l.end());

		vector<int> r;
		b = false;
		for (int i = m + 1; i < n; ++i) {
			if ((b && p[i] < p[i - 1]) || (!b && p[i] > p[i - 1])) {
				r.push_back(p[i - 1]);
				b = !b;
			}
		}

		if (m != n - 1) {
			r.push_back(p[n - 1]);
		}

		cout << (l.size() + r.size() + 1) << endl;

		for (int li : l) {
			cout << li << " ";
		}

		cout << n << " ";
	
		for (int ri : r) {
			cout << ri << " ";
		}

		cout << endl;
	}
	
	return 0;
}
	