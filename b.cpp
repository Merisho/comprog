#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long;

int gcd(int a, int b) {
	return a == 0 ? b : gcd(b % a, a);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s, t;
		cin >> s >> t;

		int a = s.length();
		int b = t.length();

		int l = lcm(a, b);

		string ss = s;
		while (ss.length() != l) {
			ss += s;
		}

		string tt = t;
		while (tt.length() != l) {
			tt += t;
		}

		if (ss == tt) {
			cout << ss;
		} else {
			cout << -1;
		}

		cout << endl;
	}
	
	return 0;
}
