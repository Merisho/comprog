#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> factors(ll n) {
	vector<ll> f;
	
	for (ll d = 2; d * d <= n; d++) {
		if (n % d != 0) {
			continue;
		}

		f.push_back(d);
        while (n % d == 0) {
            n /= d;
        }
    }
    if (n > 1) {
        f.push_back(n);
	}

	return f;
}

int main() {
	ll n;
	cin >> n;

	vector<ll> f = factors(n);
	queue<pair<ll, ll>> q;
	for (ll fi : f) {
		q.push({fi, fi});
	}

	ll k = 0;
	while (n > 1 && !q.empty()) {
		pair<ll, ll> t = q.front();
		q.pop();
		if (n % t.first != 0) {
			continue;
		}

		n /= t.first;
		q.push({t.first * t.second, t.second});

		++k;
	}

	cout << k;
	
	return 0;
}
	