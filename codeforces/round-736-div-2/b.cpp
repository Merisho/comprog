#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string e, g;
		cin >> e >> g;

		int k = 0;
		for (int i = 0; i < n; ++i) {
			if (g[i] == '0') {
				continue;
			}
			
			if (e[i] == '0') {
				++k;
			} else if (i > 0 && e[i - 1] == '1') {
				++k;
			} else if (i < n - 1 && e[i + 1] == '1') {
				e[i + 1] = '2';
				++k;
			}
		}

		cout << k << endl;
	}
	
	return 0;
}
