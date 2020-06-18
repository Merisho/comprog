#include <bits/stdc++.h>
using namespace std;

struct cell {
	int x;
	int y;
	int h;
	int v;
};

int main() {
	int n;
	cin >> n;

	int a = sqrt(n);
	int b = n / a;

	queue<cell> q;
	q.push({0, 0, b - 1, a - 1});

	set<pair<int, int>> s;
	if (n % 2 == 1) {
		q.push(cell{0, -1, 0, 0});
	}

	while (!q.empty()) {
		cell c = q.front();
		q.pop();
		s.insert({c.x, c.y});

		if (c.h > 0) {
			q.push({c.x + 1, c.y, c.h - 1, c.v});
		}

		if (c.v > 0) {
			q.push({c.x, c.y + 1, c.h, c.v - 1});
		}

		s.insert({c.x + 1, c.y});
		s.insert({c.x - 1, c.y});
		s.insert({c.x, c.y + 1});
		s.insert({c.x, c.y -1});
	}

	cout << s.size() << endl;
	for (pair<int, int> si : s) {
		cout << si.first << " " << si.second << endl;
	}
	
	return 0;
}
	