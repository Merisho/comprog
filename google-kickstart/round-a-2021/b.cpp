#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int UP = 0;
constexpr int RIGHT = 1;
constexpr int DOWN = 2;
constexpr int LEFT = 3;

int r, c;
vector<vector<int>> g;
bool vis[1000][1000][4][4];

int ans = 0;

void find(int i, int j, int from, int dir, int v = 0, int h = 0) {
	if (i >= r || i < 0 || j >= c || j < 0 || g[i][j] == 0) {
		int mn = min(v, h);
		int mx = max(v, h);
		
		if (mn > 1 && mx > 1) {
			ans += min(mn, mx / 2) - 1;
		}

		return;
	}
	
	if (vis[i][j][dir][from]) {
		return;
	}

	vis[i][j][dir][from] = true;

	if (dir == UP) {
		find(i - 1, j, from, UP, v + 1, h);
		find(i + 1, j, DOWN, DOWN, 1, 1);
		find(i, j + 1, dir, RIGHT, v, 1);
		find(i, j - 1, dir, LEFT, v, 1);
	} else if (dir == RIGHT) {
		find(i, j + 1, from, RIGHT, v, h + 1);
		find(i, j - 1, LEFT, LEFT, 1, 1);
		find(i - 1, j, dir, UP, 1, h);
		find(i + 1, j, dir, DOWN, 1, h);
	} else if (dir == DOWN) {
		find(i + 1, j, from, DOWN, v + 1, h);
		find(i - 1, j, UP, UP, 1, 1);
		find(i, j + 1, dir, RIGHT, v, 1);
		find(i, j - 1, dir, LEFT, v, 1);
	} else if (dir == LEFT) {
		find(i, j - 1, from, LEFT, v, h + 1);
		find(i, j + 1, RIGHT, RIGHT, 1, 1);
		find(i - 1, j, dir, UP, 1, h);
		find(i + 1, j, dir, DOWN, 1, h);
	}
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		cin >> r >> c;

		g = vector<vector<int>>(r, vector<int>(c));
		ans = 0;
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				cin >> g[i][j];

				for (int l = 0; l < 4; ++l) {
					for (int k = 0; k < 4; ++k) {
						vis[i][j][l][k] = false;
					}
				}
			}
		}

		find(0, 0, DOWN, DOWN, 1, 1);

		cout << "Case #" << test_case << ": ";
		cout << ans << endl;
	}
	
	return 0;
}
