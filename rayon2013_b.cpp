#include <iostream>
using namespace std;

int talentsCompetition(int n, int k, int f[10][10]);
int fsum(int xstart, int ystart, int xend, int yend, int xdir, int ydir, int f[10][10]);
int findMax(int n, int k, int f[10][10], int xstart, int ystart, int xdir, int ydir);

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

int talentsCompetition(int n, int k, int f[10][10])
{
	int max1 = findMax(n, k, f, 0, 0, 1, 1);
	int max2 = findMax(n, k, f, n - 1, 0, -1, 1);
	int max3 = findMax(n, k, f, 0, n - 1, 1, -1);
	int max4 = findMax(n, k, f, n - 1, n - 1, -1, -1);

	int m1 = max1 > max2 ? max1 : max2;
	int m2 = max3 > max4 ? max3 : max4;
	return m1 > m2 ? m1 : m2;
}

int findMax(int n, int k, int f[10][10], int xstart, int ystart, int xdir, int ydir) {
	int x = xstart;
	int y = ystart;
	int max = 0;
	for (int size = 1; size <= n; size++) {
		if (fsum(xstart, ystart, x, y, xdir, ydir, f) <= k) {
			max = size;
		}
		x += xdir;
		y += ydir;
	}

	return max;
}

int fsum(int xstart, int ystart, int xend, int yend, int xdir, int ydir, int f[10][10])
{
	int s = 0;
	for (int y = ystart; y != yend + ydir; y += ydir) {
		for (int x = xstart; x != xend + xdir; x += xdir) {
			s += f[y][x];
		}
	}

	return s;
}
