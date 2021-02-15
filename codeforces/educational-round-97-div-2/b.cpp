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

		int k = 0;
		for (int i = 1; i < n; ++i) {
			if (s[i] == s[i - 1]) {
				++k;
			}
		}

		cout << (k + 1) / 2 << endl;
	}
	
	return 0;
}
