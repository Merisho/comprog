#include <bits/stdc++.h>
using namespace std;

long long len(long long n) {
	int k = 0;
	while (n) {
		++k;
		n /= 10;
	}

	return k;
}

int main() {
	int T;
	cin >> T;
	
	for (int t = 0; t < T; ++t) {
		long long a, b;
		cin >> a >> b;
		
		long long l = len(b + 1);
		cout << a * (l - 1) << endl;
	}
	
	return 0;
}
	