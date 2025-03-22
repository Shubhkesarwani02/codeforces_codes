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
#define sum(a) a.begin(), a.end(), 0

using namespace std;

void helper()
{
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << "1 ";
        cout << endl;
        return;
    }
    // means x==1
    if (k == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (k == 2)
    {
        if (n & 1)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            int times = n / 2;
            cout << "YES" << endl;
            cout << times << endl;
            for (int i = 0; i < times; i++)
                cout << "2 ";
            cout << endl;
            return;
        }
    }
    cout << "YES" << endl;
    vi ans;
    if (n & 1)
    {
        int tm = n / 2 - 1;
        while (tm--)
        {
            ans.pb(2);
        }
        ans.pb(3);
    }
    else
    {
        int tmm = n / 2;
        while (tmm--)
        {
            ans.pb(2);
        }
    }
    cout << ans.size() << endl;
    output(ans);
    cout << endl;
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
}
