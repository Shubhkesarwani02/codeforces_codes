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
    int n;
    cin >> n;
    vi p(n), s(n);
    input(p);
    input(s);
    vi a(n);
    rep(i, 0, n - 1)
    {
        int g = __gcd(p[i], s[i]);
        a[i] = p[i] / g * s[i];
    }
    bool ok = true;
    int g = 0;
    rep(i, 0, n - 1)
    {
        g = __gcd(g, a[i]);
        if (g != p[i])
        {
            ok = false;
            break;
        }
    }
    g = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        g = __gcd(g, a[i]);
        if (g != s[i])
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
