#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double dp[101][101][101];

double f(int g, int s, int b) {
	if (dp[g][s][b] > -1) {
		return dp[g][s][b];
	}

	double x = g;
	double y = s;
	double z = b;

	double sum = x + y + z;
	dp[g][s][b] = (x / sum) * (f(g + 1, s, b) + 1) + (y / sum) * (f(g, s + 1, b) + 1) + (z / sum) * (f(g, s, b + 1) + 1);

	return dp[g][s][b];
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < 101; ++i) {
		for (int j = 0; j < 101; ++j) {
			for (int k = 0; k < 101; ++k) {
				if (i == 100 || j == 100 || k == 100) {
					dp[i][j][k] = 0;
				} else {
					dp[i][j][k] = -1;
				}
			}
		}
	}

	cout << setprecision(6) << fixed << f(a, b, c);
	
	return 0;
}
