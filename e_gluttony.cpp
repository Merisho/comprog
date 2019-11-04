#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

long long calcCount(int, vector<pair<int, int>>&);

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

	vector<pair<int, int>> products(n);
	long long maxProduct = 0;
	for (int i = 0; i < n; i++) {
		products[i] = pair<int, int>(a[i], f[n - i - 1]);

		int p = a[i] * f[n - i - 1];
		if (p > maxProduct) {
			maxProduct = p;
		}
	}

	sort(begin(products), end(products), [](pair<int, int> const& lhs, pair<int, int> const& rhs) {
		return lhs.first * lhs.second < rhs.first * rhs.second;
	});

	int start = 0;
	int end = maxProduct;
	int lim = 0;
	while (start < end) {
		lim = (start + end) / 2;
		long long count = calcCount(lim, products);
		long long d = s - count;
		if (d == k) {
			break;
		}

		if (d > k) {
			start = lim;
		}
		else {
			end = lim;
		}
	}

	cout << (start >= end ? maxProduct : lim);

	return 0;
}

long long calcCount(int lim, vector<pair<int, int>>& products) {
	int count = 0;
	int n = products.size();

	bool d = false;
	for (int i = n - 1; i >= 0; i--) {
		if (lim < products[i].first * products[i].second) {
			int a = lim / products[i].second;
			count += a;
			if (d && a > 0) {
				--count;
			}
			else {
				d = true;
			}
		}
		else {
			count += products[i].first;
		}
	}

	return count;
}
