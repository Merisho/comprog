#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string repeat(string s, int n) {
	string res = s;	
	for (int i = 0; i < n; ++i) {
		res += s;
	}

	return res;
}

bool div(string s, string t) {
	if (s.length() < t.length()) {
		return false;
	}

	for (int i = 0; i < s.length(); ++i) {
		for (int j = 0; j < t.length(); ++j) {
			if (s[i] != t[j]) {
				return false;
			}

			++i;
		}

		--i;
	}

	return true;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s, t;
		cin >> s >> t;

		string ans = "-1";
		for (int i = 0; i < 450; ++i) {
			string ss = repeat(s, i);
			if (div(ss, t)) {
				ans = ss;
				break;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
