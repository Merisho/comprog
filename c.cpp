#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	vector<int> a(6);
	for (int i = 0; i < 6; ++i) {
		cin >> a[i];
	}

	int n;
	cin >> n;

	vector<int> b(n);
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int m1 = b[b.size() - 1] - a[5];
	
	int ans = 1e9;
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < b.size() - 1; ++j) {
			ans = min(ans, abs(m1 - (b[j] - a[i])));
		}
	}
	
	cout << ans;
	
	return 0;
}
