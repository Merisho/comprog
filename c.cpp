#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		int mt[n][m];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> mt[i][j];
			}
		}

		vector<vector<int>> count(n + m - 1, vector<int>(2, 0));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				++count[i + j][mt[i][j]];
			}
		}

		int s = 0;
		for (int i = 0; i <= (n + m - 2) / 2; ++i) {
			int j = n + m - 2 - i;
			if (i == j) {
				break;
			}

			s += min(count[i][0] + count[j][0], count[i][1] + count[j][1]);
		}

		cout << s << endl;
	}
	
	return 0;
}
	