#include <bits/stdc++.h>
using namespace std;

constexpr long long MAX = 1e9;

struct res {
	long long dx;
	long long dy;
	int i;
};

map<char, int> diry = {
	{'N', -1},
	{'S', 1},
	{'W', 0},
	{'E', 0}
};
map<char, int> dirx = {
	{'N', 0},
	{'S', 0},
	{'W', -1},
	{'E', 1}
};
string s;
int n;

res subpath(int l) {
	long long x = 0;
	long long y = 0;
	int i;
	for (i = l; i < n && s[i] != ')'; ++i) {
		int si = s[i] - '0';
		if (si >= 2 && si <= 9) {
			res r = subpath(i + 2);
			x = (x + r.dx * si) % MAX;
			y = (y + r.dy * si) % MAX;
			i = r.i;
		} else {
			x = (x + dirx[s[i]]) % MAX;
			y = (y + diry[s[i]]) % MAX;
		}
	}

	return res{
		dx: x,
		dy: y,
		i: i,
	};
}

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		cin >> s;

		n = s.length();

		res r = subpath(0);
		long long w = 1 + r.dx;
		long long h = 1 + r.dy;
		
		if (w <= 0) {
			w = MAX + w;
		}

		if (h <= 0) {
			h = MAX + h;
		}

		cout << "Case #" << t << ": " << w << " " << h << endl;
	}
	
	return 0;
}
