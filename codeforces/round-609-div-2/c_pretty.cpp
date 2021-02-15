#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		char c;
		cin >> c;
		a[i] = c - '0';
	}

	vector<int> b(n);
	for (int i = 0; i < n - k; ++i) {
		if (a[i] < a[i + k]) {
			b[i] = b[i + k] = a[i + k] + 1;
			
			int carry = 1;
			int j = 0;
			while (carry > 0) {
				b[i + k - j]++;
				if (b[i + k - j] > 9) {
					b[i + k - j] = 0;
				} else {
					carry = 0;
				}

				++j;
			}

			for (int j = i; j >= 0; j -= k) {
				b[j] = b[i + k];
			}
		} else {
			b[i] = b[i + k] = a[i + k];
		}
	}

	cout << n << endl;
	for (int bi : b) {
		cout << bi;
	}
	
	return 0;
}
	