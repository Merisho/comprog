#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, k;
	cin >> n >> k;

	vector<string> s(n);
	for (string& si : s) {
		cin >> si;
	}

	vector<int> c(k);
	for (int i = 0; i < k; ++i) {
		cin >> c[i];
	}

	vector<vector<int>> cc(n, vector<int>(k, 0));
	vector<int> sc(k, 0);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < s[i].length(); ++j) {
			++cc[i][s[i][j] - 'a'];
		}

		for (int l = 0; l < k; ++l) {
			sc[l] += cc[i][l];
		}
	}

	for (int i = 0; i < k; ++i) {
		sc[i] -= c[i];
	}

	int ans = -1;
	int t = 0;
	for (int i = 0; i < n; ++i) {
		bool ok = true;
		for (int j = 0; j < k; ++j) {
			if (sc[j] != cc[i][j]) {
				ok = false;
				break;
			}
		}

		if (ok && t >= 1) {
			ans = -1;
			break;
		}

		if (ok) {
			++t;
			ans = i;
		}
	}

	cout << (ans == -1 ? "Someone call SCP Foundation" : s[ans]);

	return 0;
}
