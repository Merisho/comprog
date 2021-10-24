#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool pal(string s) {
	if (s.size() == 0) {
		return true;
	}

	return equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		int ans = 1e9;
		for (int i = 0; i < 26; ++i) {
			char ex = 'a' + i;

			int l = 0;
			int r = n - 1;
			int k = 0;
			while (l <= r) {
				if (s[l] == s[r]) {
					++l;
					--r;
					continue;
				}

				if (s[l] == ex) {
					++k;
					++l;
				} else if (s[r] == ex) {
					++k;
					--r;
				} else {
					k = -1;
					break;
				}
			}

			if (k > -1) {
				ans = min(ans, k);
			}
		}

		cout << (ans == 1e9 ? -1 : ans) << endl;
	}
	
	return 0;
}
