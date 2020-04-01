#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y, A, B, C;
	cin >> X >> Y >> A >> B >> C;

	vector<int> p(A);
	for (int& pi : p) {
		cin >> pi;
	}

	vector<int> q(B);
	for (int& qi : q) {
		cin >> qi;
	}

	vector<int> r(C);
	for (int& ri : r) {
		cin >> ri;
	}

	sort(p.begin(), p.end());
	sort(q.begin(), q.end());
	sort(r.begin(), r.end());

	int rd = A - 1;
	int gr = B - 1;
	int cl = C - 1;
	int x = 0;
	int y = 0;
	long long s = 0;
	while (x < X && y < Y) {
		int pi = p[rd];
		int qi = q[gr];
		int ri = cl >= 0 ? r[cl] : 0;

		int a, b;
		if (pi >= qi) {
			a = pi;
			--rd;
			if (qi >= ri) {
				b = qi;
				--gr;
			} else {
				b = ri;
				--cl;
			}
		} else {
			a = qi;
			--gr;
			if (pi >= ri) {
				b = pi;
				--rd;
			} else {
				b = ri;
				--cl;
			}
		}

		++x;
		++y;

		s += a + b;
	}

	while (x < X) {
		int pi = p[rd];
		int ri = cl >= 0 ? r[cl] : 0;

		if (pi >= ri) {
			s += pi;
			--rd;
		} else {
			s += ri;
			--cl;
		}

		++x;
	}

	while (y < Y) {
		int qi = q[gr];
		int ri = cl >= 0 ? r[cl] : 0;

		if (qi >= ri) {
			s += qi;
			--rd;
		} else {
			s += ri;
			--cl;
		}

		++y;
	}

	cout << s;
	
	return 0;
}
	
