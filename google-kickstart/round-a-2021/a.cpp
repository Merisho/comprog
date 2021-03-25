#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;
		
		string s;
		cin >> s;

		int g = 0;
		int b = 0;
		for (int i = 0; i < n / 2; ++i) {
			if (s[i] != s[n - i - 1]) {
				++g;
			}
		}

		cout << "Case #" << test_case << ": ";
		cout << abs(k - g) << endl;
	}
	
	return 0;
}
