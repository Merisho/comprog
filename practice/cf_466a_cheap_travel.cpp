// Problem URL: https://codeforces.com/problemset/problem/466/A
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int ans = n * a;
	if (b < a * m) {
		int k = n / m;
		int r = n % m;
		int p = min(r * a, b);
		ans = min(ans, k * b + p);
	}

	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_466a_cheap_travel_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
