#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, a, b;
		cin >> n >> a >> b;

		vector<int> r(n, 0);
		vector<int> c(26, 0);
		for (int i = 0; i < a; ++i) {
			int m = min(i, b - 1); 
			r[i] = m;
			++c[m];
		}

		for (int i = 1; i <= n - a; ++i) {
			--c[r[i - 1]];
			int k = 0;
			int z = -1;
			int nz = -1;
			for (int j = 0; j < 26; ++j) {
				if (c[j] > 0) {
					++k;
					nz = j;
				} else {
					z = j;
				}
			}

			if (k == b) {
				r[i + a - 1] = nz;
				++c[nz];
			} else {
				r[i + a - 1] = z;
				++c[z];
			}
		}

		for (int ri : r) {
			cout << char(ri + 'a');
		}

		cout << endl;
	}
	
	return 0;
}
	