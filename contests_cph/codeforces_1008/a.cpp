#include <bits/stdc++.h>

#define int long long
#define vi vector<int>
#define input(v)      \
    for (auto &i : v) \
        cin >> i
#define output(v)     \
    for (auto &i : v) \
        cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define sum(a) accumulate(a.begin(), a.end(), 0LL)

using namespace std;

void helper() {
    int n, x;
    cin >> n >> x;
    vi a(n);
    input(a);
    
    int s = 0;
    for (auto it : a)
        s += it;
    
    if (s == n * x)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        helper();
    }
    
    return 0;
}
