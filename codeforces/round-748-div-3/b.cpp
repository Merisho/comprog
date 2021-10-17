#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string n;
		cin >> n;

		int l = n.length();
		int ans = l;
		for (int i = 0; i < l; ++i) {
			for (int j = i + 1; j < l; ++j) {
				if (((n[i] - '0') * 10 + (n[j] - '0')) % 25 == 0) {
					ans = min(ans, l - i - 2);
				}
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
