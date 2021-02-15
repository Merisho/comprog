#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	string s[n], t[m];
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
	}

	for (int i = 0; i < m; ++i) {
		cin >> t[i];
	}

	int Q;
	cin >> Q;

	for (int q = 0; q < Q; ++q) {
		int y;
		cin >> y;

		cout << s[(y - 1) % n] + t[(y - 1) % m] << endl;
	}
	
	return 0;
}
	