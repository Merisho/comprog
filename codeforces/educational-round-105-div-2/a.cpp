#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		vector<vector<int>> c = {
			{1, 1, -1},
			{1, -1, 1},
			{-1, 1, 1},
			{1, -1, -1},
			{-1, -1, 1},
			{-1, 1, -1},
		};

		bool ok = false;
		for (int i = 0; i < c.size(); ++i) {
			int ss = 0;
			for (int j = 0; j < s.length(); ++j) {
				ss += c[i][s[j] - 'A'];
				if (ss < 0) {
					break;
				}
			}

			if (ss == 0) {
				ok = true;
				break;
			}
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
