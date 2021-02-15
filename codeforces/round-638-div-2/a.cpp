#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int a = (1<<n) + (1<<(n / 2)) - 2;
		int b = (1<<(n + 1)) - 2 - a;
		cout << abs(a - b) << endl;
	}
	
	return 0;
}
	