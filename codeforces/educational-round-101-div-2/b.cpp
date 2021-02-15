#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int rs = 0;
		int pr = 0;
		for (int i = 0; i < n; ++i) {
			int ri;
			cin >> ri;
			rs += ri;

			pr = max(pr, rs);
		}

		int m;
		cin >> m;

		int bs = 0;
		int pb = 0;
		for (int i = 0; i < m; ++i) {
			int bi;
			cin >> bi;
			bs += bi;

			pb = max(pb, bs);
		}

		cout << (pr + pb) << endl;
	}
	
	return 0;
}
