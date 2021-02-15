#include <bits/stdc++.h>
using namespace std;

bool notBeautiful(string s) {
	bool b = true;
	for (int i = 1; i < s.length(); ++i) {
		if (s[i - 1] == s[i] && s[i] != '?') {
			return true;
		}
	}

	return false;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		if (notBeautiful(s)) {
			cout << -1 << endl;
			continue;
		}

		for (int i = 0; i < s.length(); ++i) {
			if (s[i] != '?') {
				continue;
			}

			char p = i == 0 ? 'z' : s[i - 1];
			char n = i == s.length() - 1 ? 'z' : s[i + 1];

			if (p != 'a' && n != 'a') {
				s[i] = 'a';
			} else if (p != 'b' && n != 'b') {
				s[i] = 'b';
			} else {
				s[i] = 'c';
			}
		}
		

		cout << s << endl;
	}

	return 0;
}
	