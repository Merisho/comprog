// Problem URL: https://codeforces.com/problemset/problem/327/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;

	vector<int> p(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		int a;
		cin >> a;

		p[i] = p[i - 1];
		if (a == 1) {
			++p[i];
		}
	}

	int ans = 0;
	for (int l = 0; l <= n; ++l) {
		for (int r = l + 1; r <= n; ++r) {
			int zeros = (r - p[r]) - (l - p[l]);
			int ones = p[r] - p[l];

			ans = max(ans, p[n] - ones + zeros);
		}
	}

	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_327a_flipping_game_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
