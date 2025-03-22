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
using namespace std;

void helper()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;

    if (l == r && r == d && d == u)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}