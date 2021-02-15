#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int k = 0;
		while (n > 1) {
			int b = 0;
			int nh = 2;
			while (nh <= n) {
				b += 2;
				n -= nh;
				
				nh = b + 2 + b / 2;
			}

			++k;
		}

		cout << k << endl;
	}
	
	return 0;
}
	