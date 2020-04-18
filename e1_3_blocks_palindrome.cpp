#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int T;
	cin >> T;
 
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;
 
		int ans = 0;
		vector<vector<int>> p(27, vector<int>(n + 1, 0));
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			for (int j = 1; j < 27; ++j) {
				p[j][i + 1] = p[j][i];
			}
 
			++p[a][i + 1];
 
			ans = max(ans, p[a][i + 1]);
		}
 
		for (int a = 1; a < 27; ++a) {
			for (int i = 1; i <= n && p[a][i] <= p[a][n] / 2; ++i) {
				for (int b = 1; b < 27; ++b) {
					for (int j = i + 1; j < n && p[a][n] - p[a][j] >= p[a][i]; ++j) {
						ans = max(ans, p[a][i] * 2 + p[b][j] - p[b][i]);
					}
				}
			}
		}
 
		cout << ans << endl;
	}
	
	return 0;
}