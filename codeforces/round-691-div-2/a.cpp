#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string r, b;
		cin >> r >> b;

		int nr = 0;
		int nb = 0;

		for (int i = 0; i < n; ++i) {
			if (r[i] > b[i]) {
				++nr;
			} else if (b[i] > r[i]) {
				++nb;
			}
		}

		if (nr > nb) {
			cout << "RED";
		} else if (nr < nb) {
			cout << "BLUE";
		} else {
			cout << "EQUAL";
		}

		cout << endl;
	}
	
	return 0;
}
