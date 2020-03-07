#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> a(n, vector<int>(m));
	for (vector<int>& ai : a) {
		for (int& b : ai) {
			cin >> b;
		}
	}

	map<pair<int, int>, bool> d;
	long long s = 0;
	for (int i = 0; i < n; ++i) {
		s += a[i][m - 1];
		for (int j = m - 1; j > 0; --j) {
			int b = a[i][j];
			int c = a[i][j - 1];

			if (c == 0) {
				c = b - 1;
				a[i][j - 1] = c;
				d[{i, j - 1}] = true;
			}

			if (c >= b) {
				s = -1;
				break;
			}

			s += c;
		}

		if (s == -1) {
			break;
		}
	}

	for (int j = 0; j < m; ++j) {
		for (int i = n - 1; i > 0; --i) {
			int b = a[i][j];
			int c = a[i - 1][j];

			if (c >= b) {
				if (d[{i - 1, j}]) {
					s -= c;
					c = b - 1;
					a[i - 1][j] = c;
					s += c;
				} else {
					s = -1;
					break;
				}
			}
		}

		if (s == -1) {
			break;
		}
	}

	cout << s;
	
	return 0;
}
	