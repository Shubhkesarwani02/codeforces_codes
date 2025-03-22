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

int computeMex(const vi &a, int l, int r)
{
    bool present[4] = {false, false, false, false};
    rep(i, l, r)
    {
        if (a[i] < 4)
            present[a[i]] = true;
    }
    rep(x, 0, 3)
    {
        if (!present[x])
            return x;
    }
    return 4;
}

void helper()
{
    int n;
    cin >> n;
    vi a(n);
    input(a);

    vector<pii> ops;

    while ((int)a.size() > 3)
    {
        bool hasZero = count(all(a), 0);
        if (hasZero)
        {
            int pos = find(all(a), 0) - a.begin();
            if (pos == 0)
            {
                int m = computeMex(a, 0, 1);
                ops.pb({1, 2});
                a = {m};
                a.insert(a.end(), a.begin() + 2, a.end());
            }
            else
            {
                int m = computeMex(a, pos - 1, pos);
                ops.pb({pos, pos + 1});
                vi newA(a.begin(), a.begin() + pos - 1);
                newA.pb(m);
                newA.insert(newA.end(), a.begin() + pos + 1, a.end());
                a = newA;
            }
        }
        else
        {
            int m = computeMex(a, 0, (int)a.size() - 1);
            ops.pb({1, (int)a.size()});
            a = {m};
            break;
        }

        if ((int)a.size() == 3)
        {
            int p = computeMex(a, 0, 1);
            if (p != 0 && a[2] != 0)
            {
                ops.pb({1, 2});
                a = {p, a[2]};
            }
            else
            {
                int q = computeMex(a, 1, 2);
                if (a[0] != 0 && q != 0)
                {
                    ops.pb({2, 3});
                    a = {a[0], q};
                }
                else
                {
                    ops.pb({1, 3});
                    a = {computeMex(a, 0, 2)};
                }
            }
        }

        if ((int)a.size() == 2)
        {
            int m = computeMex(a, 0, 1);
            ops.pb({1, 2});
            a = {m};
        }
    }

    cout << ops.size() << endl;
    for (auto it : ops)
        cout << it.first << " " << it.second << endl;
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
