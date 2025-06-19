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
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1 || count(s.begin(), s.end(), s[0]) == n)
    {
        cout << "NO\n";
        return;
    }
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (s < rs || k >= 1)
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
