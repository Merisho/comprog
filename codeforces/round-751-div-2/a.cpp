#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		int ai = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] < s[ai]) {
				ai = i;
			}
		}

		cout << s[ai] << ' ';

		for (int i = 0; i < s.length(); ++i) {
			if (i != ai) {
				cout << s[i];
			}
		}

		cout << endl;
	}
	
	return 0;
}
