#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, k, x;
		cin >> n >> k >> x;

		string s;
		cin >> s;

		ll curr = 1;
		char p = 'a';
		int i = n - 1;
		int last = n;
		while (curr < x && i >= 0) {
			if (s[i] == '*') {
				if (p == 'a') {
					curr *= (k + 1);
				} else {
					curr += k;
				}

				last = i;
			}

			p = s[i];
			--i;
		}

		for (int j = 0; j < last; ++j) {
			if (s[j] == 'a') {
				cout << s[j];
			}
		}

		for (int i = 0; i < k + x - curr; ++i) {
			cout << 'b';
		}

		for (int j = last + 1; j < n; ++j) {
			if (s[j] == 'a') {
				cout << s[j];
				continue;
			}

			for (int i = 0; i < k; ++i) {
				cout << 'b';
			}
		}

		cout << endl;
	}
	
	return 0;
}
