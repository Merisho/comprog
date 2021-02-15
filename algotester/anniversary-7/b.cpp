#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	map<string, int> m;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		string s;
		int w;

		cin >> s >> w;

		if (w > m[s]) {
			sum -= m[s];
			sum += w;
			m[s] = w;
		}
	}

	cout << sum;

	return 0;
}
	