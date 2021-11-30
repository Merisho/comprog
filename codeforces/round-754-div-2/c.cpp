#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string s;
		cin >> s;
		
		int ans = 1e9;
		for (int i = 1; i < n; ++i) {
			if (s[i] == 'a') {
				if (i > 5) {
					if (s[i] == s[i - 6] && s[i] == s[i - 3] && s[i - 5] == s[i - 4] && s[i - 2] == s[i - 1] && s[i - 4] != s[i - 2]) {
						ans = min(ans, 7);
					}
				}

				if (i > 2 && s[i] == s[i - 3] && s[i - 1] != s[i - 2]) {
					ans = min(ans, 4);
				}

				if (i > 1 && s[i] == s[i - 2]) {
					ans = min(ans, 3);
				}

				if (s[i] == s[i - 1]) {
					ans = 2;
				}
			}
		}

		cout << (ans == 1e9 ? -1 : ans) << endl;
	}
	
	return 0;
}
