#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		char m[n][n];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> m[i][j];
			}
		}

		int s1 = m[0][1];
		int s2 = m[1][0];
		int f1 = m[n - 1][n - 2];
		int f2 = m[n - 2][n - 1];

		vector<pair<int, int>> ans;
		if (s1 != s2) {
			if (f1 != f2) {
				ans.push_back(max(s1, s2) == s1 ? make_pair(0, 1) : make_pair(1, 0));
				ans.push_back(min(f1, f2) == f1 ? make_pair(n - 1, n - 2) : make_pair(n - 2, n - 1));
			} else {
				if (s1 == f1) {
					ans.push_back({ 0, 1 });
				} else {
					ans.push_back({ 1, 0 });
				}
			}
		} else {
			if (f1 != f2) {
				if (f1 == s1) {
					ans.push_back({ n - 1, n - 2 });
				} else {
					ans.push_back({ n - 2, n - 1 });
				}
			} else {
				if (s1 == f1) {
					ans.push_back({ 0, 1 });
					ans.push_back({ 1, 0 });
				}
			}
		}

		cout << ans.size() << endl;
		for (auto a : ans) {
			cout << a.first + 1 << " " << a.second + 1 << endl;
		}
	}
	
	return 0;
}
