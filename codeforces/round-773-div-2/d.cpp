#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> cnt;
    for (int& ai : a) {
        cin >> ai;
        ++cnt[ai];
    }

    
    for (auto c : cnt) {
        if (c.second % 2 == 1) {
            cout << -1 << endl;
            return;
        }
    }

    if (n == 2) {
        if (a[0] != a[1]) {
            cout << -1 << endl;
            return;
        }

        cout << 0 << endl;
        cout << 1 << endl;
        cout << 2 << endl;
        return;
    }

    vector< pair<int, int> > inserts;
    vector<int> s;
    for (int i = 0; i + 3 < n; i+= 2) {
        if (a[i] == a[i + 1]) {
            s.push_back(2);
            continue;
        }

        int inserted = inserts.size() * 2;

        s.push_back(4);
        if (a[i] == a[i + 2] && a[i + 1] == a[i + 3]) {
            i += 2;
            continue;
        }

        if (a[i] == a[i + 2]) {
            inserts.push_back(pair<int, int>(inserted + i + 3, a[i + 1]));
            ++i;
        } else {
            inserts.push_back(pair<int, int>(inserted + i + 2, a[i]));
            inserts.push_back(pair<int, int>(inserted + i + 3, a[i + 1]));
        }
    }

    cout << inserts.size() << endl;
    for (auto i : inserts) {
        cout << i.first << " " << i.second << endl;
    }

    cout << s.size() << endl;
    for (int si : s) {
        cout << si << " ";
    }

    cout << endl << "-------" << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve();
    }

    return 0;
}
