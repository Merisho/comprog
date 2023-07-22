// Problem URL: https://codeforces.com/problemset/problem/489/B
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;
	 
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}

	int m;
	cin >> m;

	vector<int> b(m);
	for (int &bi : b) {
		cin >> bi;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (abs(a[i] - b[j]) <= 1) {
				++ans;
				a[i] = -1;
				b[j] = -1;
				break;
			}
		}
	}

	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_489b_bersu_ball_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
