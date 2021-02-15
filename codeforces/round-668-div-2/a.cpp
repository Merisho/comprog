#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> p(n);
		for (int& pi : p) {
			cin >> pi;
		}

		for (int i = n - 1; i >= 0; --i) {
			cout << p[i] << " ";
		}

		cout << endl;
	}
	
	return 0;
}
