#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n * 2);
		for (int& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		cout << a[n] - a[n - 1] << endl;
	}
	
	return 0;
}
	