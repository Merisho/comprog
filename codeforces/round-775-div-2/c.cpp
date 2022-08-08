#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

ll sum(vector<ll> v) {
    sort(v.begin(), v.end());

    ll s = 0;
    ll k = v.size();
    for (ll i = 0; i < k; ++i) {
        s += v[i] * (2 * i + 1 - k);
    }

    return s;
}

void solve(int test_case = 0) {
    ll n, m;
    cin >> n >> m;

    map<ll, vector<ll> > r;
    map<ll, vector<ll> > c;
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            ll cc;
            cin >> cc;

            r[cc].push_back(i);
            c[cc].push_back(j);
        }
    }

    ll ans = 0;
    for (auto v : r) {
        ans += sum(v.second) + sum(c[v.first]);
    }

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
