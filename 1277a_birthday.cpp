#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int k = 0;
		for (int i = 1; i <= 9; ++i) {
			long long curr = i;
			while (curr <= n) {
				++k;
				curr *= 10;
				curr += i;
			}
		}

		cout << k << endl;
	}
	
	return 0;
}
	