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

		int l = 0;
		while (s[l] == '0') ++l;
		int r = s.length() - 1;
		while (s[r] == '0') --r;
	
		char p = s[l];
		int o = 0;
		int z = p == '0';
		int ans = p == '1' ? a : 0;
		for (int i = l + 1; i <= r; ++i) {
			if (s[i] == '1' && p == '0') {
				++o;
			} else if (s[i] == '0') {
				++z;
			}
			p = s[i];
		}

		ans += min(o * a, z * b);
		cout << ans << endl;
	}
	
	return 0;
}
