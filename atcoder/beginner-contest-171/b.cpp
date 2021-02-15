#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	int s = 0;
	for (int i = 0; i < k; ++i) {
		s += a[i];
	}

	cout << s;
	
	return 0;
}
	