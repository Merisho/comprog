// Problem URL: https://codeforces.com/problemset/problem/189/A
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	int a[3];
	cin >> n >> a[0] >> a[1] >> a[2];

	sort(a, a+3);

	int ans = 0;
	for (int z = 0; z * a[2] <= n; ++z) {
		for (int y = 0; z * a[2] + y * a[1] <= n; ++y) {
			int d = n - (z * a[2] + y * a[1]);
			if (d % a[0] == 0) {
				ans = max(ans, z + y + d / a[0]);
			}
		}
	}

	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_189a_cut_ribbon_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
