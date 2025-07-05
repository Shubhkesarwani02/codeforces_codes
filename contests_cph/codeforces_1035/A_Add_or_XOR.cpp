#include <bits/stdc++.h>
#define ll long long
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
    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }

    if (b < a)
    {
        if ((a & 1) && a - b == 1)
        {
            cout << y << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
        return;
    }

    ll d = b - a;
    ll evens, odds;
    if (a % 2 == 0)
    {
        evens = (d + 1) / 2;
        odds = d / 2;
    }
    else
    {
        odds = (d + 1) / 2;
        evens = d / 2;
    }

    ll cost = odds * x + evens * min(x, y);
    cout << cost << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
