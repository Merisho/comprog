#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		int n = s.length();
		int o = 0;
		int z = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '1') {
				++o;
			} else {
				++z;
			}
		}

		int p0 = 0;
		int p1 = 0;
		int ans = min(o, z);
		for (int i = 0; i < n; ++i) {
			if (s[i] == '1') {
				++p1;
			} else {
				++p0;
			}

			ans = min(ans, p0 + o - p1);
			ans = min(ans, p1 + z - p0);
		}

		cout << ans << endl;
	}
	
	return 0;
}
	