#include <bits/stdc++.h>
using namespace std;

constexpr long long MAX = 1e9;

string s;
int n;

int subpath(int m, int i, map<char, long long>& d) {
	map<char, long long> ld = {
		{ 'N', 0 },
		{ 'S', 0 },
		{ 'W', 0 },
		{ 'E', 0 }
	};

	int k = i;
	while (k < n && s[k] != ')') {
		int c = s[k] - '0';
		if (c >= 2 && c <= 9) {
			map<char, long long> sd = {
				{ 'N', 0 },
				{ 'S', 0 },
				{ 'W', 0 },
				{ 'E', 0 }
			};
			k = subpath(c, k + 2, sd);
			ld['N'] += sd['N'];
			ld['S'] += sd['S'];
			ld['W'] += sd['W'];
			ld['E'] += sd['E'];
		} else {
			++ld[s[k]];
		}

		++k;
	}

	d['N'] += ld['N'] * m;
	d['E'] += ld['E'] * m;
	d['S'] += ld['S'] * m;
	d['W'] += ld['W'] * m;

	return k;
}

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		cin >> s;

		n = s.length();

		map<char, long long> dirs = {
			{ 'N', 0 },
			{ 'S', 0 },
			{ 'W', 0 },
			{ 'E', 0 }
		};
		subpath(1, 0, dirs);

		int dw = (dirs['E'] - dirs['W']) % MAX;
		int dh = (dirs['S'] - dirs['N']) % MAX;
		int w;
		if (dw < 0) {
			w = MAX + 1 + dw;
		} else {
			w = 1 + dw;
		}

		int h;
		if (dh < 0) {
			h = MAX + 1 + dh;
		} else {
			h = 1 + dh;
		}

		cout << "Case #" << t << ": " << w << " " << h << endl;
	}
	
	return 0;
}
