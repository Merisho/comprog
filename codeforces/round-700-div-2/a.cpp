#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;
		
		string ans;
		for (int i = 0; i < s.length(); ++i) {
			if (i % 2 == 0) {
				if (s[i] == 'a') {
					ans += "b";
				} else {
					ans += "a";
				}
			} else {
				if (s[i] == 'z') {
					ans += "y";
				} else {
					ans += "z";
				}
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
