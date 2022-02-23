#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        int n;
        cin >> n;

        set<int> unq;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;

            unq.insert(a);
        }

        for (int k = 1; k <= n; ++k) {
            if (k >= unq.size()) {
                cout << k;
            } else {
                cout << unq.size();
            }

            cout << " ";
        }

        cout << endl;
    }

    return 0;
}
