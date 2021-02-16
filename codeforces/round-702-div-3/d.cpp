#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> a;
vector<int> ans;

void f(int l, int r, int d = 0) {
	if (l >= r) {
		return;
	}

	int mx = -1e9;
	int mxi = -1;
	for (int i = l; i < r; ++i) {
		if (a[i] > mx) {
			mx = a[i];
			mxi = i;
		}
	}

	ans[mxi] = d;

	f(l, mxi, d + 1);
	f(mxi + 1, r, d + 1);
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		a = vector<int>(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		ans = vector<int>(n, 0);
		f(0, n);

		for (int a : ans) {
			cout << a << " ";
		}

		cout << endl;
	}
	
	return 0;
}
