#include <bits/stdc++.h>
using namespace std;

int main() {
	int Q;
	cin >> Q;

	for (int q = 0; q < Q; ++q) {
		int n;
		cin >> n;

		int ft;
		cin >> ft;

		int pt = ft;
		int j = -1;
		bool same = true;
		for (int i = 1; i < n; ++i) {
			int t;
			cin >> t;

			if (t == pt) {
				j = i - 1;
			} else {
				same = false;
			}

			pt = t;
		}

		if (ft == pt) {
			j = n - 1;
		}

		if (same) {
			cout << 1 << endl;
			for (int i = 0; i < n; ++i) {
				cout << 1 << " ";
			}
			cout << endl;
			continue;
		}

		if (n % 2 == 0) {
			cout << 2 << endl;
			for (int i = 0; i < n; ++i) {
				cout << (i % 2) + 1 << " ";
			}
			cout << endl;
			continue;
		}

		if (j != -1) {
			int s;
			if (j % 2 == 1) {
				s = 1;
			} else {
				s = 2;
			}
			 
			cout << 2 << endl;
			for (int i = 0; i < n; ++i) {
				if (i == (j + 1) % n || i == j) {
					cout << 2 << " ";
					s = 1;
					continue;
				}

				cout << s << " ";
				s = (s % 2) + 1;
			}
			cout << endl;
			continue;
		}

		cout << 3 << endl;
		for (int i = 0; i < n - 1; ++i) {
			cout << (i % 2) + 1 << " ";
		}
		cout << 3 << endl;
	}
	
	return 0;
}
	