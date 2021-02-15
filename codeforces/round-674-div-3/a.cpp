#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, x;
		cin >> n >> x;

		int a = 1;
		int b = 2;
		int k = 1;
		while (n > b) {
			a = b + 1;
			b = a + x - 1;
			++k;
		}

		cout << k << endl;
	}
	
	return 0;
}
