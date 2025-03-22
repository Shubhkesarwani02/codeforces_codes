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
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << -1 << endl;
        return;
    }
    if ((x & y) == 0)
    {
        cout << 0 << endl;
        return;
    }
    int m = 0;
    if (x < y)
    {
        while ((1LL << m) <= y)
            m++;
        cout << ((1LL << m) - y) << endl;
    }
    else
    {
        while ((1LL << m) <= x)
            m++;
        cout << ((1LL << m) - x) << endl;
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
