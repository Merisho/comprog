#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime(int a) {
	for (int i = 2; i <= sqrt(a); ++i) {
		if (a % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		cout << 1 << " " << 1 << " ";
		for (int i = 0; i < n - 2; ++i) {
			cout << 0 << " ";
		}

		cout << endl;

		for (int i = 0; i < n - 1; ++i) {
			for (int j = 0; j < i; ++j) {
				cout << 0 << " ";
			}

			for (int j = i; j < n && j - i < 3; ++j) {
				cout << 1 << " ";
			}

			for (int j = i + 3; j < n; ++j) {
				cout << 0 << " ";
			}

			cout << endl;
		}
	}
	
	return 0;
}
