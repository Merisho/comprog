#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		for (int i = n * 4 - 2, k = 0; k < n; i -= 2, ++k) {
			cout << i << " ";
		}

		cout << endl;
	}
	
	return 0;
}
