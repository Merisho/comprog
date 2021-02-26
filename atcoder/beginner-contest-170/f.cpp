#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<int, int> dirs[4] = {
	{-1, 0},
	{1, 0},
	{0, -1},
	{0, 1},
};
 
int h, w, xd, yd, k;
 
int main() {
    cin >> h >> w >> k;
 
    int x1, y1;
    cin >> x1 >> y1 >> xd >> yd;
 
    --x1;
    --y1;
    --xd;
    --yd;
 
	bool m[h][w];
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            char c;
            cin >> c;
 
            m[i][j] = c == '.';
        }
    }

	pair<int, int> dp[h][w][4];
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			for (int k = 0; k < 4; ++k) {
				dp[i][j][k] = {1e9, 1e9};
			}
		}
	}

	queue<tuple<int, int, int>> q;
	for (int i = 0; i < 4; ++i) {
		int x = x1 + dirs[i].first;
		int y = y1 + dirs[i].second;
		if (x >= 0 && y >= 0 && x < h && y < w && m[x][y]) {
			q.push({ x, y, i });
			dp[x][y][i] = {1, 0};
		}

		dp[x1][y1][i] = {0, 0};
	}

	while (!q.empty()) {
		int x, y, dir;
		tie(x, y, dir) = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i) {
			int xx = x + dirs[i].first;
			int yy = y + dirs[i].second;
			if (xx < 0 || yy < 0 || xx >= h || yy >= w || !m[xx][yy]) {
				continue;
			}

			if (i == dir) {
				int l = dp[x][y][dir].second + 1;
				int val = dp[x][y][dir].first + l / k;
				if (dp[xx][yy][i].first > val) {
					dp[xx][yy][i].first = val;

					if (l >= k) {
						dp[xx][yy][i].second = 1;
					} else {
						dp[xx][yy][i].second = l;
					}

					q.push({ xx, yy, i });
				}				
			} else {
				int val = dp[x][y][dir].first + 1;
				if (dp[xx][yy][i].first > val) {
					dp[xx][yy][i].first = val;
					dp[xx][yy][i].second = 0;
					q.push({ xx, yy, i });
				}
			}
		}
	}

	int ans = 1e9;
	for (int i = 0; i < 4; ++i) {
		ans = min(ans, dp[xd][yd][i].first);
	}
 
    cout << (ans == 1e9 ? -1 : ans);
 
    return 0;
}