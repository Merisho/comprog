#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int mn = 1e9;
		for (int j = i; j < n; ++j) {
			mn = min(mn, a[j]);
			ans = max(ans, (j - i + 1) * mn);
		}
	}

	cout << ans;
	
	return 0;
}
