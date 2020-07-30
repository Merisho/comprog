#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		int ans = 1;
		for (int i = 0; i <= 9; ++i) {
			for (int j = 0; j <= 9; ++j) {
				int a = i;
				int k = 0;
				for (char c : s) {
					if (c - '0' == a) {
						++k;
						a = a == i ? j : i;
					}
				}

				if (k % 2 == 1 && i != j) {
					--k;
				}
				ans = max(ans, k);
			}
		}

		cout << (s.length() - ans) << endl;
	}
	
	return 0;
}
