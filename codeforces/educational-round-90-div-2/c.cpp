#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		ll res = s.length();
		int cur = 0;
		int mn = 0;
		for (int i = 0; i < s.length(); ++i) {
			cur += s[i] == '+' ? 1 : -1;
			if (cur < mn) {
				mn = cur;
				res += i + 1;
			}
		}

		cout << res << endl;
	}
	
	return 0;
}
	