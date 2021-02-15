#include <bits/stdc++.h>
using namespace std;

int f(int x, int d) {
	int ans = x + d / (x + 1);
	if (d % (x + 1) != 0) {
		return ans + 1;
	}

	return ans;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long n, d;
		cin >> n >> d;

		bool ans = false;
		for (int i = 0; i <= sqrt(d); ++i) {
			if (f(i, d) <= n) {
				ans = true;
				break;
			}
		}

		if (ans) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	