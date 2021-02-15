#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int a, b, p;
		string s;
		cin >> a >> b >> p >> s;

		int costs[2] = { a, b };
		int ans = 1;
		int i = s.length() - 1;
		while (i > 0) {
			int j = i - 1;
			char c = s[j];
			if (costs[c - 'A'] > p) {
				ans = i + 1;
				break;
			}

			while (j >= 0 && s[j] == c) {
				i = j;
				--j;
			}

			p -= costs[c - 'A'];
		}

		cout << ans << endl;
	}
	
	return 0;
}
	