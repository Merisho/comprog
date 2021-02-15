#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;

	queue<long long> q;
	for (int i = 1; i < 10; ++i) {
		q.push(i);
	}

	for (int i = 0; i < k - 1; ++i) {
		long long x = q.front();
		q.pop();

		int r = x % 10;
		if (r > 0) {
			q.push(x * 10 + r - 1);
		}

		q.push(x * 10 + r);

		if (r < 9) {
			q.push(x * 10 + r + 1);
		}
	}

	cout << q.front();
	
	return 0;
}
	