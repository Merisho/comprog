#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

long long calcCount(int, vector<int>&, vector<int>&);

int main() {
	int n;
	long long k;
	cin >> n >> k;

	vector<int> a(n);
	long long s = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		s += a[i];
	}

	vector<int> f(n);
	int fmin = 1e7;
	for (int i = 0; i < n; ++i) {
		cin >> f[i];
		if (f[i] < fmin) {
			fmin = f[i];
		}
	}

	sort(a.begin(), a.end());
	sort(f.begin(), f.end());

	long long maxProduct = 0;
	for (int i = 0; i < n; i++) {
		int p = a[i] * f[n - i - 1];
		if (p > maxProduct) {
			maxProduct = p;
		}
	}

	int start = 0;
	int end = maxProduct;
	int lim;
	int prevLim = -1;
	while (start < end) {
		lim = (start + end) / 2;
		long long count = calcCount(lim, a, f);
		if (count <= k) {
			prevLim = lim;
			end = lim;
		}
		else if (prevLim != -1) {
			break;
		}
		else {
			start = lim;
		}
	}

	cout << (prevLim == -1 ? maxProduct : prevLim);

	return 0;
}

long long calcCount(int lim, vector<int>& a, vector<int>& f) {
	int count = 0;
	int n = a.size();

	for (int i = 0; i < n; ++i) {
		count += max(0, a[i] - lim / f[n - i - 1]);
	}

	return count;
}
