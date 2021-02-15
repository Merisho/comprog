#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		bool b = false;
		for (int i = 0; i < n - 1; ++i) {
			if (s[i] == '1' && s[i + 1] == '0') {
				b = true;
			}
		}

		if (!b) {
			cout << s;
		} else {
			int i = 0;
			while (s[i] == '0') {
				cout << '0';
				++i;
			}

			cout << '0';

			int j = n - 1;
			while (s[j] == '1') {
				cout << '1';
				--j;
			}
		}

		cout << endl;
	}
	
	return 0;
}
	