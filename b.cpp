#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;
		
		vector<int> a(n);
		map<int, int> m;
		set<int> s;
		for (int& ai : a) {
			cin >> ai;
			++m[ai];
			s.insert(ai);
		}

		long long x = 0;
		long long ans = 1;
		for (int si : s) {
			if (ans + m[si] + x - 1 >= si) {
				ans += m[si] + x;
				x = 0;
			} else {
				x += m[si];
			}
		}

		cout << ans << endl;
	}

	return 0;
}
	