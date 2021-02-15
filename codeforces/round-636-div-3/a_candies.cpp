#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		for (int i = 2; i < 30; ++i) {
			int a = pow(2, i) - 1;
			if (n % a == 0) {
				cout << n / a << endl;
				break;
			}
		}
	}
	
	return 0;
}
	