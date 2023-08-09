// Problem URL: https://codeforces.com/problemset/problem/1352/D
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;

void solve(int test_case) {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}

	int p[2] = {0, n - 1};
	int t = 0;
	int prev = 0;
	int m = 0;
	int c = 1;
	int s[2] = {0, 0};
	while (p[0] <= p[1]) {
		int w = 0;
		while (p[0] <= p[1] && w <= prev) {
			w += a[p[t]];
			p[t] += c;
		}

		s[t] += w;

		prev = w;
		++m;

		t = (t + 1) % 2;
		c = 1 + t * (-2);
	}

	cout << m << " " << s[0] << " " << s[1] << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1352d_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
