#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string b;
		cin >> b;

		cout << 1;
		int p = b[0] - '0' + 1;
		for (int i = 1; i < n; ++i) {
			int c = b[i] - '0';
			if (c + 1 == p) {
				cout << 0;
				p = c;
			} else {
				cout << 1;
				p = c + 1;
			}
		}

		cout << endl;
	}
	
	return 0;
}
