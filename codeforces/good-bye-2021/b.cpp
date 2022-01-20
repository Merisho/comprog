#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		int j = 0;
		for (int i = 1; i < n; ++i) {
			if (s[i] <= s[i - 1]) {
				j = i;
			} else {
				break;
			}
		}

		for (int i = 0; i <= j; ++i) {
			cout << s[i];
		}

		for (int i = j; i >= 0; --i) {
			cout << s[i];
		}

		cout << endl;
	}
	
	return 0;
}
