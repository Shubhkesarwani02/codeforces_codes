#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int &x : nums) cin >> x;

    // Check for zero in the array
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            cout << i + 1 << endl;
            return;
        }
    }

    vector<double> logPrefix(n);
    logPrefix[0] = log(nums[0]);

    for (int i = 1; i < n; i++) {
        logPrefix[i] = logPrefix[i - 1] + log(nums[i]);
    }

    for (int i = 0; i < n; i++) {
        double leftLog = logPrefix[i]; 
        double rightLog = logPrefix[n - 1] - logPrefix[i];

        if (fabs(leftLog - rightLog) < 1e-9) {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
