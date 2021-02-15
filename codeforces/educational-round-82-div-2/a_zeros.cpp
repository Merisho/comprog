#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		int l = -1;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '1') {
				l = i;
				break;
			}
		}

		int r = -1;
		for (int i = s.length() - 1; i >= 0; --i) {
			if (s[i] == '1') {
				r = i;
				break;
			}
		}

		int k = 0;
		for (int i = l + 1; i < r; ++i) {
			if (s[i] == '0') {
				++k;
			}
		}

		cout << k << endl;
	}
	
	return 0;
}
	