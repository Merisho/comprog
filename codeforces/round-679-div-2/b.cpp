#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		vector<int> cols(n * m + 1);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int a;
				cin >> a;
				cols[a] = j;
			}
		}

		vector<int> rows(n * m + 1);
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				int a;
				cin >> a;
				rows[a] = j;
			}
		}

		vector<vector<int>> ans(n, vector<int>(m));
		for (int i = 1; i <= n * m; ++i) {
			ans[rows[i]][cols[i]] = i;
		}

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
