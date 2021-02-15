#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int q, d;
		cin >> q >> d;

		for (int i = 0; i < q; ++i) {
			int a;
			cin >> a;

			if (a == d || a >= 10 * d) {
				cout << "YES" << endl;
				continue;
			}

			int r = a % d;
			int x = d - r;

			bool ok = false;
			for (int j = 1; j <= 10 && j * d < a; ++j) {
				if ((j * d) % 10 == x) {
					ok = true;
					break;
				}
			}

			if (ok) {
				cout << "YES";
			} else {
				cout << "NO";
			}

			cout << endl;
		}
	}
	
	return 0;
}
