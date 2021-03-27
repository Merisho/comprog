#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string a, b;
		cin >> a >> b;

		int mx = 0;
		for (int i = 0; i < a.length(); ++i) {
			for (int j = 0; j < b.length(); ++j) {
				int k = 0;
				while (i + k < a.length() && j + k < b.length() && a[i + k] == b[j + k]) {
					++k;
				}

				mx = max(mx, k);
			}
		}

		cout << (a.length() + b.length() - mx * 2) << endl;
	}
	
	return 0;
}
