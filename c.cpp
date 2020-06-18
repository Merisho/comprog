#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
 
	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
 
	vector<int> b(n + 1, -1);
	queue<pair<int, int>> q;
 
	if (a[1] == 0) {
		q.push({1, 1});
	} else {
		b[1] = 0;
	}
 
	for (int i = 2; i <= n; ++i) {
		if (a[i - 1] == a[i]) {
			q.push({i, a[i] + 1});
		} else {
			b[i] = a[i - 1];
			int k = a[i - 1] + 1;
			while (k < a[i] && !q.empty()) {
				pair<int, int> p = q.front();
				if (p.second <= k) {
					b[p.first] = k;
					q.pop();
					++k;
				}
			}
		}
	}
 
	for (int i = 1; i <= n; ++i) {
		if (b[i] == -1) {
			b[i] = 1e6;
		}
 
		cout << b[i] << " ";
	}
 
	return 0;
}