#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	double x[8];
	double y[8];

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> x[i] >> y[i];
	}

	double res = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (j == i) {
				continue;
			}

			res += sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
		}
	}

	cout << setprecision(16) << res / N;

	return 0;
}


