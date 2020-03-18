#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		string res;
		set<char> u;
		int k = 1;
		char prev = s[0];
		for (int i = 1; i < s.length(); ++i) {
			if (s[i] != prev) {
				if (k % 2 == 1 && u.count(prev) == 0) {
					res += prev;
					u.insert(prev);
				}

				k = 1;
				prev = s[i];
			} else {
				++k;
			}
		}

		if (k % 2 == 1 && u.count(prev) == 0) {
			res += prev;
		}

		sort(res.begin(), res.end());

		cout << res << endl;
	}
	
	return 0;
}
	