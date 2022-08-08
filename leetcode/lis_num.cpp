#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

int findNumberOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 1);
    vector<int> c(n, 1);

    int mx_i = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[j] < nums[i]) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    c[i] = c[j];
                } else if (dp[j] + 1 == dp[i]) {
                    c[i] += c[j];
                }
            }
        }

        if (dp[i] > dp[mx_i]) {
            mx_i = i;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (dp[i] == dp[mx_i]) {
            ans += c[i];
        }
    }

    return ans;
}

int main() {
    int arr[] = {1,1,1,2,2,2,3,3,3};
    vector<int> v(arr, arr + 9);
    cout << findNumberOfLIS(v) << endl;
}
