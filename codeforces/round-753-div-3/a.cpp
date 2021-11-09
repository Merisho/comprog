#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string kbs, w;
		cin >> kbs >> w;

		vector<int> kb(26);
		int i = 0;
		for (char c : kbs) {
			kb[c - 'a'] = i;
			++i;
		}

		int ans = 0;
		for (int i = 1; i < w.length(); ++i) {
			ans += abs(kb[w[i] - 'a'] - kb[w[i - 1] - 'a']);
		}

		cout << ans << endl;
	}
	
	return 0;
}
