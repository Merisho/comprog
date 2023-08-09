// Problem URL: https://codeforces.com/problemset/problem/158/B
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;

	vector<int> s(5, 0);
	for (int i = 0; i < n; ++i) {
		int si;
		cin >> si;

		++s[si];
	}

	int ans = 0;
	int mn = min(s[1], s[3]);
	s[1] -= mn;
	s[3] -= mn;

	ans = mn + s[3] + s[4] + (s[1] + 2 * s[2] + 3) / 4;

	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_158b_taxi_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
