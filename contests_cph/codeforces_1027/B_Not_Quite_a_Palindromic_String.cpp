#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define output(v)     \
    for (auto &i : v) \
    cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

void helper()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int z = 0;
    for (char c : s) if (c == '0') z++;
    int o = n - z;
    int m = n / 2 - k;
    if (m >= 0 && m <= n / 2 && z >= m && o >= m && ((z - m) % 2 == 0))
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
