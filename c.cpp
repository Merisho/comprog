#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int a[50];
int b[50];
int c[50];
int d[50];
int s[11];
int ans = 0;

void f(int i) {
	if (i > n) {
		int sum = 0;
		for (int i = 0; i < q; ++i) {
			if (s[b[i]] - s[a[i]] == c[i]) {
				sum += d[i];
			}
		}

		ans = max(ans, sum);
		return;
	}

	for (int v = s[i - 1]; v <= m; ++v) {
		s[i] = v;
		f(i + 1);
	}
}

int main() {
	cin >> n >> m >> q;

	for (int i = 0; i < q; ++i) {
		cin >> a[i];
		cin >> b[i];
		cin >> c[i];
		cin >> d[i];
	}

	s[0] = 1;

	f(1);

	cout << ans;
	
	return 0;
}
	