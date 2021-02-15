#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		vector<int> b(n);
		for (int i = 0; i < (n + 1) / 2; ++i) {
			b[n - 1 - 2 * i] = a[i];
			
			int j = n - 2 * i - 2;
			if (j >= 0) {
				b[j] = a[n - 1 - i];
			}
		}

		for (int bi : b) {
			cout << bi << " ";
		}

		cout << endl;
	}
	
	return 0;
}
	