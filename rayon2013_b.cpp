#include <iostream>
using namespace std;

int talentsCompetition(int n, int k, int f[10][10]);
int diagonalSum(int x, int y, int size, int n, int k, int f[10][10]);
int sum(int x, int y, int size, int f[10][10]);

int main()
{
	int n, k;
	int f[10][10];

	cin >> n >> k;

	getchar();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			f[i][j] = getchar() - 48;
		}
		getchar();
	}

	cout << talentsCompetition(n, k, f);
	return 0;
}

int talentsCompetition(int n, int k, int f[10][10]) {
	for (int size = n; size >= 2; size--) {
		for (int x = 0; x <= n - size; x++) {
			if (diagonalSum(x, 0, size, n, k, f) <= k) {
				return size;
			}
		}

		if (size == n) {
			continue;
		}

		int x = n - size;
		for (int y = 1; y <= n - size; y++) {
			if (diagonalSum(x, y, size, n, k, f) <= k) {
				return size;
			}
		}
	}

	return 1;
}

int diagonalSum(int x, int y, int size, int n, int k, int f[10][10]) {
	if (x - 1 < 0 || y + 1 > n - size) {
		return sum(x, y, size, f);
	}

	int s = sum(x, y, size, f);
	if (s <= k) {
		return s;
	}
	
	return diagonalSum(x - 1, y + 1, size, n, k, f);
}

int sum(int xstart, int ystart, int size, int f[10][10]) {
	int xend = xstart + size - 1;
	int yend = ystart + size - 1;
	int s = 0;

	int y = ystart;
	while (y <= yend) {
		int x = xstart;
		while (x <= xend) {
			s += f[y][x];
			x++;
		}
		y++;
	}

	return s;
}
