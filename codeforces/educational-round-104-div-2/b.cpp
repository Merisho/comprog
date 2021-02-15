#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		int kk = k % n;
		if (kk == 0) {
			kk = n;
		}

		if (n % 2 == 1) {
			kk += (k - 1) / (n / 2);
		}

		kk = kk % n == 0 ? n : kk % n;

		cout << kk << endl;
	}
	
	return 0;
}
