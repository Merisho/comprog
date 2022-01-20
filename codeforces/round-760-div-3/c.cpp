#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return a == 0 ? b : gcd(b % a, a);
}

ll gcd(vector<ll>& v, int start) {
    ll g = v[start];
    for (int i = start + 2; i < v.size(); i += 2) {
        g = gcd(g, v[i]);
    }

    return g;
}

int main() {
    int T;
    cin >> T;

    for (int tc = 0; tc < T; ++tc) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (ll& ai : a) {
            cin >> ai;
        }

        ll d = gcd(a, 0);
        for (int i = 1; i < n; i += 2) {
            if (a[i] % d == 0) {
                d = 0;
                break;
            }
        }

        if (d == 0) {
            d = gcd(a, 1);
            for (int i = 0; i < n; i += 2) {
                if (a[i] % d == 0) {
                    d = 0;
                    break;
                }
            }
        }

        cout << d << endl;
    }

    return 0;
}
