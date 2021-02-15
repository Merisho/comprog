#include <bits/stdc++.h>
using namespace std;

int main() {
	int Q;
	cin >> Q;

	for (int q = 0; q < Q; ++q) {
		int n;
		cin >> n;

		vector<int> p(n + 1);
		for (int i = 1; i <= n; ++i) {
			int pi;
			cin >> pi;

			p[i] = pi;
		}

		for (int i = 1; i <= n; ++i) {
			int j = p[i];
			int k = 1;
			while (j != i) {
				j = p[j];
				++k;
			}

			cout << k << " ";
		}

		cout << endl;
	}
	
	return 0;
}
	