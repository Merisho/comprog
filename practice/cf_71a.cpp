#include <iostream>
#include <string>
using namespace std;

void solve(int test_case) {
    string w;
    cin >> w;

    if (w.length() <= 10) {
        cout << w << endl;
        return;
    }

    int n = w.length() - 2;
    cout << w[0] << n << w[w.length() - 1] << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
