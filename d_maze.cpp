#include <bits/stdc++.h>
using namespace std;

char m[500][500];
int r, c;

int k = 0;

bool v[500][500];

void find(int i, int j) {
	if (i == r - 1 && j == c - 1) {
		++k;
		return;
	}

	if (v[i][j]) {
		return;
	}

	v[i][j] = true;

	if (i != 0 && m[i - 1][j] == '.') {
		find(i - 1, j);
	}

	if (j != 0 && m[i][j - 1] == '.') {
		find(i, j - 1);
	}

	if (i != r - 1 && m[i + 1][j] == '.') {
		find(i + 1, j);
	}

	if (j != c - 1 && m[i][j + 1] == '.') {
		find(i, j + 1);
	}

	v[i][j] = false;
}

int main() {
	cin >> r >> c;

	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> m[i][j];
		}
	}

	find(0, 0);

	if (k == 0) {
		cout << "ZERO";
	} else if (k == 1) {
		cout << "ONE";
	} else {
		cout << "MANY";
	}
	
	return 0;
}
	