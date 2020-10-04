#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		int k = 0;
		for (int i = 0; i < n; ++i) {
			int s1, s2, s3, s4;
			cin >> s1 >> s2 >> s3 >> s4;

			if (s2 == s3) {
				++k;
			}
		}

		cout << (m % 2 == 0 && k > 0 ? "YES" : "NO") << endl;
	}
	
	return 0;
}
