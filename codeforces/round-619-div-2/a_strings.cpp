#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string a, b, c;
		cin >> a >> b >> c;

		int l = a.length();
		bool ans = true;
		for (int i = 0; i < l; ++i) {
			if ((a[i] == b[i] && a[i] != c[i]) || (a[i] != b[i] && a[i] != c[i] && b[i] != c[i])) {
				ans = false;
				break;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
	