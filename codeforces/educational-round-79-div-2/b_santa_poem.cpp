#include <bits/stdc++.h>
using namespace std;
 
int find(vector<long long>& p, long long s) {
	int a = 0;
	int b = p.size();
 
	while (a != b) {
		int m = (a + b) / 2;
 
		if (p[m] <= s && s < p[m + 1]) {
			b = m;
			break;
		}
 
		if (p[m] <= s && p[m + 1] <= s) {
			a = m + 1;
		} else if (p[m] > s && p[m + 1] > s) {
			b = m;
		}
	}
 
	return b;
}
 
int main() {
	int T;
	cin >> T;
 
	for (int t = 0; t < T; ++t) {
		long long n, s;
		cin >> n >> s;
 
		vector<int> a(n);
		vector<long long> p(n + 1);
		p[0] = 0;
		int f = 0;
		for (int i = 1; i <= n; ++i) {
			int ai;
			cin >> ai;
 
			a[i - 1] = ai;
			p[i] = p[i - 1] + ai;

			if (p[i] >= s && f == 0) {
				f = i;
			}
		}
		
		if (p[n] <= s) {
			cout << 0 << endl;
			continue;
		}
 
		int m = 0;
		int ans = 0;
		for (int i = 0; i < f; ++i) {
			s += a[i];
 
			int j = find(p, s);
			if (j > m) {
				ans = i + 1;
				m = j;
			}
 
			s -= a[i];
		}
 
		cout << ans << endl;
	}
	
	return 0;
}