#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define input(v) for (auto &i : v) cin >> i
#define output(v) for (auto &i : v) cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void helper() {
    int n;
    cin >> n;
    vi arr(n);
    input(arr);
    int m = *min_element(all(arr));
    int freq = 0;
    vi M;
    for (int x : arr) {
        if (x % m == 0) {
            M.pb(x);
        }
        if (x == m) freq++;
    }
    if (M.size() < 2) {
        cout << "No" << endl;
        return;
    }
    if (freq >= 2) {
        cout << "Yes" << endl;
        return;
    }
    vi candidates;
    for (int x : M) {
        if (x != m) candidates.pb(x / m);
    }
    if (candidates.empty()) {
        cout << "No" << endl;
        return;
    }
    int g = candidates[0];
    for (size_t i = 1; i < candidates.size(); i++) {
        g = gcd(g, candidates[i]);
    }
    cout << (g == 1 ? "Yes" : "No") << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) helper();
    return 0;
}
