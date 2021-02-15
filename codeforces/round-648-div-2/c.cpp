#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int>& a, vector<int>& pb) {
	vector<int> l(n, 0);
	vector<int> r(n, 0);
	for (int i = 0; i < n; ++i) {
		int j = pb[a[i]];
		int ld = (j - i + n) % n;
		int rd = (i - j + n) % n;

		++l[ld];
		++r[rd];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans = max(ans, l[i]);
		ans = max(ans, r[i]);
	}

	return ans;
}

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> pa(n + 1);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		pa[a[i]] = i;
	}

	vector<int> b(n);
	vector<int> pb(n + 1);
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		pb[b[i]] = i;
	}

	int ans = max(f(n, a, pb), f(n, b, pa));

	cout << ans;
	
	return 0;
}
	