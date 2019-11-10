#include <iostream>
#include <vector>
using namespace std;

vector<int> platforms(int, int, int, vector<int>);

int main() {
	int n, m, d;
	cin >> n >> m >> d;

	vector<int> c(m);
	for (int& ci : c) {
		cin >> ci;
	}

	vector<int> b = platforms(n, m, d, c);
	if (b.size() == 0) {
		cout << "NO";
		return 0;
	}

	cout << "YES" << endl;
	int p = 0;
	for (int i = 0; i < n; ++i) {
		if (p < b.size() && i == b[p]) {
			for (int j = 0; j < c[p]; j++) {
				cout << p + 1 << " ";
			}

			i += c[p] - 1;
			++p;
		}
		else {
			cout << 0 << " ";
		}
	}

	return 0;
}

vector<int> platforms(int n, int m, int d, vector<int> c) {
	vector<int> b(m);
	int prev = n;
	for (int i = m - 1; i >= 0; --i) {
		b[i] = prev - c[i];
		prev = b[i];
	}

	int x = -1;
	int p = 0;
	while (x < n) {
		int next = x + d;
		if (next >= n) {
			return b;
		}

		if (p == m) {
			return vector<int>();
		}

		if (next < b[p]) {
			b[p] = next;
			x = b[p] + c[p] - 1;
		}
		else if (next <= b[p] + c[p]) {
			x = b[p] + c[p];
		}

		p++;
	}

	return b;
}
