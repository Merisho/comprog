#include <bits/stdc++.h>
using namespace std;
 
int n, m, x;
int c[12];
int a[12][12];
int u[12];
int dp[4096];
 
constexpr int MAX = 1e9;
 
bool ok() {
	for (int i = 0; i < m; ++i) {
		if (u[i] < x) {
			return false;
		}
	}
 
	return true;
}
 
void add(int b) {
	for (int i = 0; i < m; ++i) {
		u[i] += a[b][i];
	}
}
 
void rm(int b) {
	for (int i = 0; i < m; ++i) {
		u[i] -= a[b][i];
	}
}
 
int f(int mask, int s = 0) {
	if (ok()) {
		return s;
	}
 
	if (dp[mask] != MAX) {
		return dp[mask];
	}
 
	int mn = 1e9;
	for (int i = 0; i < n; ++i) {
		if ((mask >> i) & 1) {
			continue;
		}
 
		mask += (1 << i);
		add(i);
		mn = min(mn, f(mask, s + c[i]));
		dp[mask] = min(dp[mask], mn);
		rm(i);
		mask -= (1 << i);
	}
 
	return mn;
}
 
int main() {
	cin >> n >> m >> x;
	
	for (int i = 0; i < m; ++i) {
		u[i] = 0;
	}
 
	for (int i = 0; i < n; ++i) {
		cin >> c[i];
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
			u[j] += a[i][j];
		}
	}
 
	if (!ok()) {
		cout << -1;
		return 0;
	}
 
	for (int i = 0; i < 4096; ++i) {
		dp[i] = MAX;
	}
 
	for (int i = 0; i < m; ++i) {
		u[i] = 0;
	}
 
	int ans = f(0);
	if (ans == MAX) {
		cout << -1;
	} else {
		cout << ans;
	}
	
	return 0;
}