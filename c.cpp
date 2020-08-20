#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int p;
		cin >> p;
		ll s = 0;
		for (int i = 1; i < n; ++i) {
			int a;
			cin >> a;
			s += max(0, p - a);
			p = a;
		}

		cout << s << endl;
	}
	
	return 0;
}
