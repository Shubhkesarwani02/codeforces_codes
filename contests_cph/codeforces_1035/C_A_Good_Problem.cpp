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
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    if (n == 1)
    {
        cout << l << endl;
        return;
    }
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    if (n & 1)
    {
        cout << l << endl;
        return;
    }
    int tmp = l, h = 0;
    while (tmp >> 1)
    {
        tmp >>= 1;
        h++;
    }
    int p = 1LL << (h + 1);
    if (p > r)
    {
        cout << -1 << endl;
    }
    else
    {
        if (k <= n - 2)
            cout << l << endl;
        else
            cout << p << endl;
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
