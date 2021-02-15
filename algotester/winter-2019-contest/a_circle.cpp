#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;

	n = a;

	int k = 1;
	while (n != 1) {
		cin >> a;
		if (a < n) {
			n = a;
		} else {
			n--;
		}
		++k;
	}

	cout << k;
	
	return 0;
}
	