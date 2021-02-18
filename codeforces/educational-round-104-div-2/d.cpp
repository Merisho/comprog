#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int ans = 0;
		int a = 3;
		int c = (a * a + 1) / 2;
		while (c <= n) {
			++ans;
			a += 2;
			c = (a * a + 1) / 2;
		}

		cout << ans << endl;
	}
	
	return 0;
}
