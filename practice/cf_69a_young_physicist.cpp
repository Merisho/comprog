// Problem URL: https://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;
using ll = long long;

void solve(int test_case) {
	int n;

    cin >> n;
    
    int X = 0, Y = 0, Z = 0;
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;

        
        X += x;
        Y += y;
        Z += z;
    }

    cout << (X == 0 && Y == 0 && Z == 0 ? "YES" : "NO") << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_69a_young_physicist_input.txt", "r", stdin);
    #endif

	solve(0);

	return 0;
}
