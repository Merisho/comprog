#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n >= 3) {
            cout << "NO";
        } else if (n == 1) {
            cout << "YES";
        } else if (s[0] != s[1]) {
            cout << "YES";
        } else {
            cout << "NO";
        }

        cout << endl;
    }
}