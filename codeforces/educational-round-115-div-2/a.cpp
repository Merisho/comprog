#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<vector<int>> m;
vector<vector<bool>> vis;

bool f(int r, int c) {
	if (r < 0 || c < 0 || r > 1 || c >= n || m[r][c] == 1 || vis[r][c]) {
		return false;
	}

	if (r == 1 && c == n - 1) {
		return true;
	}

	vis[r][c] = true;

	bool ok = false;
	for (int i = -1; i < 2; ++i) {
		for (int j = -1; j < 2; ++j) {
			ok = ok || f(r + i, c + j);
		}
	}

	return ok;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		cin >> n;

		vis = vector<vector<bool>>(2, vector<bool>(n, false));
		m = vector<vector<int>>(2, vector<int>(n));

		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < n; ++j) {
				char c;
				cin >> c;
				m[i][j] = c - '0';
			}
		}

		if (f(0, 0)) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
