#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y, A, B, C;
	cin >> X >> Y >> A >> B >> C;

	priority_queue<int> p, q, t;
	for (int i = 0; i < A; ++i) {
		int pi;
		cin >> pi;
		p.push(pi);
	}

	for (int i = 0; i < B; ++i) {
		int qi;
		cin >> qi;
		q.push(qi);
	}

	for (int i = 0; i < C; ++i) {
		int r;
		cin >> r;
		t.push(r);
	}

	for (int i = 0; i < X; ++i) {
		t.push(p.top());
		p.pop();
	}

	for (int i = 0; i < Y; ++i) {
		t.push(q.top());
		q.pop();
	}

	long long s = 0;
	for (int i = 0; i < X + Y; ++i) {
		s += t.top();
		t.pop();
	}

	cout << s;

	return 0;
}
	
