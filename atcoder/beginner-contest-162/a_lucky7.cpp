#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	while (n != 0) {
		if (n % 10 == 7) {
			cout << "Yes";
			return 0;
		}

		n /= 10;
	}
	

	cout << "No";
	
	return 0;
}
	