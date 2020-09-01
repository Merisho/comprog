#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	string s, t;
	cin >> s >> t;

	int ans = 1e9;
	for (int i = 0; i <= s.length() - t.length(); ++i) {
		int k = 0;
		for (int j = 0; j < t.length(); ++j) {
			if (s[i + j] != t[j]) {
				++k;
			}
		}
		ans = min(ans, k);
	}

	cout << ans;
	
	return 0;
}
