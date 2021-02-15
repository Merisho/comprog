#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		char p[n][n];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> p[i][j];
			}
		}

		bool ans = true;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (p[i][j] == '0') {
					continue;
				}

				bool ok = i == n - 1 || p[i + 1][j] == '1' || j == n - 1 || p[i][j + 1] == '1';
				if (!ok) {
					ans = false;
					break;
				}
			}

			if (!ans) {
				break;
			}
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
