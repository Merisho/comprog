#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, x;
		cin >> n >> x;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		vector<int> b(n);
		for (int& bi : b) {
			cin >> bi;
		}

		string _;
		getline(cin, _);

		sort(a.begin(), a.end(), greater<int>());
		sort(b.begin(), b.end());

		bool ans = true;
		for (int i = 0; i < n; ++i) {
			if (a[i] + b[i] > x) {
				ans = false;
				break;
			}
		}

		cout << (ans ? "Yes" : "No") << endl;
	}
	
	return 0;
}
