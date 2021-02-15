#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		int p = 0;
		int d = 0;
		for (int i = 1; i <= s.length(); ++i) {
			if (s[i - 1] == 'R') {
				d = max(d, i - p);
				p = i;
			}
		}

		d = max(d, int(s.length() + 1) - p);

		cout << d << endl;
	}
	
	return 0;
}
	