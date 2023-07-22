#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve(int test_case) {
    ll n, m, a;
    cin >> n >> m >> a;

    ll ans = ((n + (a - 1)) / a) * ((m + (a - 1)) / a);
    cout << ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    solve(0);

    return 0;
}
