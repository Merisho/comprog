// Problem URL: https://codeforces.com/problemset/problem/476/B
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using ll = long long;
using ld = long double;

int k = 0;

void find(string s, int dest, int pos = 0, int i = 0) {
	if (i == s.length()) {
		if (pos == dest) {
			++k;
		}

		return;
	}

	if (s[i] == '+') {
		find(s, dest, pos + 1, i + 1);
	} else if (s[i] == '-') {
		find(s, dest, pos - 1, i + 1);
	} else {
		find(s, dest, pos + 1, i + 1);
		find(s, dest, pos - 1, i + 1);
	}
}

void solve() {
	string s1;
	cin >> s1;

	string s2;
	cin >> s2;

	int x = 0;
	int q = 1;
	for (int i = 0; i < s1.length(); ++i) {
		if (s1[i] == '+') {
			++x;
		} else {
			--x;
		}

		if (s2[i] == '?') {
			q *= 2;
		}
	}

	find(s2, x);

	double ans = double(k) / double(q);
	cout << setprecision(11) << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_476b_dreamoon_and_wifi_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
