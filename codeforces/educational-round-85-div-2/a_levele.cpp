#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int pp = 0;
		int pc = 0;
		bool ans = true;
		int d = 0;
		for (int i = 0; i < n; ++i) {
			int p, c;
			cin >> p >> c;

			int d1 = p - c;
			if (p < pp || c < pc || d1 < d) {
				ans = false;
			}

			pp = p;
			pc = c;
			d = d1;
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
	