#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a, b;
		cin >> a >> b;
		
		string s;
		cin >> s;

		int ans = 0;
		char p = '0';
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '1' && p == '0') {
				ans += a;
			}

			p = s[i];
		}

		int z = 0;
		p = '2';
		for (int i = 0; i < s.length(); ++i) {
			if (p == '2' && s[i] == '0') {
				continue;
			}

			if (p == '0' && s[i] == '1') {
				ans = min(ans, ans - a + z * b);
				z = 0;
			} else if (s[i] == '0') {
				++z;
			}

			p = s[i];
		}

		cout << ans << endl;
	}
	
	return 0;
}
