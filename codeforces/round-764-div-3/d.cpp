#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		vector<int> chars(26, 0);
		for (int i = 0; i < n; ++i) {
			++chars[s[i] - 'a'];
		}

		int ev = 0;
		int odd = 0;
		for (const int& c : chars) {
			if (c % 2 == 0) {
				ev += c;
			} else {
				ev += c - 1;
				++odd;
			}
		}

		int mn = ev / k;
		odd += ev % k;

		if (mn % 2 == 0 && odd >= k) {
			++mn;
		}

		cout << mn << endl;
	}
	
	return 0;
}
