// Problem URL: https://codeforces.com/problemset/problem/4/B
#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int d, s;
	cin >> d >> s;

	vector<pair<int, int> > t(d);
	int min_s = 0;
	int max_s = 0;
	for (auto &ti : t) {
		cin >> ti.first >> ti.second;
		min_s += ti.first;
		max_s += ti.second;
	}

	if (s < min_s || s > max_s) {
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
	int m = s - min_s;
	for (int i = 0; i < d; ++i) {
		if (m > 0) {
			int dd = min(t[i].second - t[i].first, m);
			cout << (t[i].first + dd);
			m -= dd;
		} else {
			cout << t[i].first;
		}

		cout << " ";
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_4b_before_an_exam_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
