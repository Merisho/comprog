#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		s = '0' + s;
		int ans = 0;
		for (int i = 2; i < s.length(); ++i) {
			if (s[i - 2] == s[i] || s[i - 1] == s[i]) {
				++ans;
				s[i] = '0';
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
