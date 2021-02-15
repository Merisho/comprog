#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m, r, c;
		cin >> n >> m >> r >> c;

		int a = r - 1 + c - 1;
		int b = abs(r - n) + c - 1;
		int cc = r - 1 + abs(c - m);
		int d = abs(r - n) + abs(c - m);


		int ans = max(a, b);
		ans = max(ans, cc);
		ans = max(ans, d);

		cout << ans << endl;
	}
	
	return 0;
}
