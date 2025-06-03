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
    int n, m;
    cin >> n >> m;
    vi a(m);
    input(a);
    vector<tuple<int, int, int>> p(m);
    rep(i, 0, m - 1) p[i] = make_tuple(a[i] / 100, a[i], i);
    sort(all(p));
    vi l(n), h(n);
    rep(i, 0, n - 1) l[i] = get<2>(p[i]);
    rep(i, 0, n - 1) h[i] = get<2>(p[m - n + i]);
    vi high(n), low(n);
    rep(i, 0, n - 1)
    {
        high[i] = h[n - 1 - i];
        low[i] = l[i];
    }
    rep(i, 0, n - 1)
    {
        cout << a[high[i]] << " " << a[low[i]] << " "
             << a[high[i]] << " " << a[low[i]] << " "
             << a[high[i]] << " " << a[low[i]] << "\n";
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
