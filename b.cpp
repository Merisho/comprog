#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		int ans = 1e9;
		int pp = 0;
		int p = 0;
		for (int i = 1; i < s.size(); ++i) {
			if (s[i] == s[p]) {
				p = i;
			} else {
				if (s[i] != s[pp] && s[p] != s[pp]) {
					ans = min(ans, i - pp + 1);
				}

				pp = p;
				p = i;
			}
		}

		if (ans == 1e9) {
			ans = 0;
		}

		cout << ans << endl;
	}
	
	return 0;
}
	