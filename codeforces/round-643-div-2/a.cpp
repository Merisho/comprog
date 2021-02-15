#include <bits/stdc++.h>
using namespace std;
 
long long mind(long long a) {
	long long m = 10;
	while (a != 0) {
		m = min(m, a % 10);
		a /= 10;
	}
 
	return m;
}
 
long long maxd(long long a) {
	long long m = 0;
	while (a != 0) {
		m = max(m, a % 10);
		a /= 10;
	}
 
	return m;
}
 
int main() {
	int T;
	cin >> T;
 
	for (int t = 0; t < T; ++t) {
		long long a, k;
		cin >> a >> k;
		--k;
 
		while (mind(a) != 0 && k > 0) {
			a = a + mind(a) * maxd(a);
			--k;
		}
 
		cout << a << endl;
	}
	
	return 0;
}