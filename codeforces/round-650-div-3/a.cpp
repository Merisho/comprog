#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		string ans;
		ans += s[0];

		for (int i = 1; i < s.length(); i += 2) {
			ans += s[i];
		}

		cout << ans << endl;
	}
	
	return 0;
}
	