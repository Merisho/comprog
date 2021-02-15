#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	int r, s, p;
	cin >> r >> s >> p;

	string t;
	cin >> t;

	map<char, int> points = {
		{'r', p},
		{'s', r},
		{'p', s}
	};
	map<char, char> c = {
		{'r', 'p'},
		{'s', 'r'},
		{'p', 's'}
	};

	int ans = 0;
	for (int i = 0; i < k; ++i) {
		ans += points[t[i]];
		char prev = c[t[i]];
		for (int j = i + k; j < n; j += k) {
			if (c[t[j]] != prev) {
				ans += points[t[j]];
				prev = c[t[j]];
			} else {
				prev = t[j];
			}
		}
	}

	cout << ans;
	
	return 0;
}
	
