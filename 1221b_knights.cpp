#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	char c[2] = {'W', 'B'};
	int prev = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int curr = (prev + 1) % 2;
			
			cout << c[curr];

			if (j < n - 1 || n % 2 == 1) {
				prev = curr;
			}
		}

		cout << endl;
	}
	
	return 0;
}
	