#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int h, w, x, y;
	cin >> h >> w >> x >> y;

	string s[h];
	for (int i = 0; i < h; ++i) {
		cin >> s[i];
	}

	--x;
	--y;

	int ans = 1;
	int i = x - 1;
	while (i >= 0 && s[i][y] != '#') {
		++ans;
		--i;
	}

	i = x + 1;
	while (i < h && s[i][y] != '#') {
		++ans;
		++i;
	}

	i = y - 1;
	while (i >= 0 && s[x][i] != '#') {
		++ans;
		--i;
	}

	i = y + 1;
	while (i < w && s[x][i] != '#') {
		++ans;
		++i;
	}

	cout << ans;
	
	return 0;
}
