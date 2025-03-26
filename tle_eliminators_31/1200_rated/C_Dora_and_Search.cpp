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
    vi a(n);
    for (int &i : a)
        cin >> i;
    int l = 0, r = n - 1;
    int mn = 1, mx = n;
    while (l <= r)
    {
        if (a[l] == mn)
        {
            l++;
            mn++;
        }
        else if (a[l] == mx)
        {
            l++;
            mx--;
        }
        else if (a[r] == mn)
        {
            r--;
            mn++;
        }
        else if (a[r] == mx)
        {
            r--;
            mx--;
        }
        else
        {
            break;
        }
    }
    if (l <= r)
    {
        cout << l + 1 << " " << r + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
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
