#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> c(101, 0);
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			++c[a];
		}

		int a = 200;
		int b = 200;
		for (int i = 0; i < 101; ++i) {
			if (c[i] == 1) {
				a = min(a, i);
			}

			if (c[i] == 0) {
				a = min(a, i);
				b = i;
				break;
			}
		}

		a = min(a, 100);
		b = min(b, 100);

		cout << (a + b) << endl;
	}
	
	return 0;
}
