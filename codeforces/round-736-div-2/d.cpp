#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return a == 0 ? b : gcd(b % a, a);
}

struct SegmentTree {
	int left, right;
	SegmentTree *leftChild, *rightChild;
	ll gcd;

	SegmentTree(int l, int r, vector<ll>& v) {
		left = l;
		right = r;
		if (l == r) {
			gcd = v[l];
			return;
		}

		int mid = (l + r) / 2;
		leftChild = new SegmentTree(l, mid, v);
		rightChild = new SegmentTree(mid + 1, r, v);

		gcd = __gcd(leftChild->gcd, rightChild->gcd);
	}

	ll query(int l, int r) {
		if (r < left || l > right) {
			return 0;
		}

		if (left >= l && right <= r) {
			return gcd;
		}
		
		ll lgcd = leftChild->query(l, r);
		ll rgcd = rightChild->query(l, r);

		return __gcd(lgcd, rgcd);
	}
};

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> a(n);
		for (ll& ai : a) {
			cin >> ai;
		}

		vector<ll> d(n - 1);
		for (int i = 0; i < n - 1; ++i) {
			d[i] = abs(a[i] - a[i + 1]);
		}

		SegmentTree st(0, n - 1, d);
		int ans = 1;
		int r = 0;
		for(int i = 0; i < n - 1; i++) {
			r = max(r, i);
			while(r < n - 1 && st.query(i, r) > 1)
				r++;
			ans = max(ans, r - i + 1);
		}		

		cout << ans << endl;
	}
	
	return 0;
}
