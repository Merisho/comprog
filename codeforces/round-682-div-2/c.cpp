#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> a;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		a = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> a[i][j];
			}
		}

		for (int j = 1; j < m; ++j) {
			if (a[0][j - 1] % 2 == a[0][j] % 2) {
				++a[0][j];
			}
		}

		for (int i = 1; i < n; ++i) {
			if (a[i - 1][0] % 2 == a[i][0] % 2) {
				++a[i][0];
			}

			for (int j = 1; j < m; ++j) {
				if (a[i][j - 1] % 2 == a[i][j] % 2) {
					++a[i][j];
				}
			}
		}

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << a[i][j] << " ";
			}

			cout << endl;
		}
	}
	
	return 0;
}
