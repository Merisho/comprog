#include <iostream>
#include <algorithm>
using namespace std;

constexpr int MAX = 1e9 + 1;

void shortest(int[300][300], int);

int main() {
	int D[300][300];

	for (int i = 0; i < 300; i++) {
		for (int j = 0; j < 300; j++) {
			D[i][j] = i == j ? 0 : MAX;
		}
	}

	int n, m, l;
	cin >> n >> m >> l;

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		D[a - 1][b - 1] = D[b - 1][a - 1] = c;
	}

	shortest(D, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (D[i][j] <= l) {
				D[i][j] = 1;
			}
			else {
				D[i][j] = MAX;
			}
		}
	}

	shortest(D, n);

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int s, t;
		cin >> s >> t;
		int r = D[s - 1][t - 1];
		if (r >= MAX) {
			r = 0;
		}
		cout << r - 1 << endl;
	}
}

void shortest(int D[300][300], int n) {
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
			}
		}
	}
}
