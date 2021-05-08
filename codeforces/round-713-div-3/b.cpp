#include <bits/stdc++.h>
#define y first
#define x second
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string m[n];
		for (int i = 0; i < n; ++i) {
			cin >> m[i];
		}

		vector<pair<int, int>> a;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (m[i][j] == '*') {
					a.push_back({ i, j });
				}
			}
		}

		if (a[0].x == a[1].x) {
			int d = abs(a[0].y - a[1].y);
			int x;
			if (a[0].x - d < 0) {
				x = a[0].x + d;
			} else {
				x = a[0].x - d;
			}

			m[a[0].y][x] = '*';
			m[a[1].y][x] = '*';
		}

		if (a[0].y == a[1].y) {
			int d = abs(a[0].x - a[1].x);
			int y;
			if (a[0].y - d < 0) {
				y = a[0].y + d;
			} else {
				y = a[0].y - d;
			}

			m[y][a[0].x] = '*';
			m[y][a[1].x] = '*';
		} else if (a[0].x == a[1].y && a[1].x == a[0].y) {
			m[a[0].x][a[1].y] = '*';
			m[a[1].x][a[0].y] = '*';
		} else {
			int d = abs(a[0].x - a[1].x);
			if (a[0].x < a[1].x) {
				m[a[0].y][a[0].x + d] = '*';
				m[a[1].y][a[1].x - d] = '*';
			} else {
				m[a[0].y][a[0].x - d] = '*';
				m[a[1].y][a[1].x + d] = '*';
			}
		}

		for (int i = 0; i < n; ++i) {
			cout << m[i] << endl;
		}
	}
	
	return 0;
}
