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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    vector<pii> rects;
    rects.pb({l1, b1});
    rects.pb({l2, b2});
    rects.pb({l3, b3});
    int total_area = l1 * b1 + l2 * b2 + l3 * b3;
    int S = sqrt((long double)total_area);
    if (S * S != total_area)
    {
        cout << "NO\n";
        return;
    }
    bool ok = false;
    if (!ok)
    {
        bool same_h = true;
        int sum_w = 0;
        for (auto &p : rects)
        {
            if (p.second != S)
                same_h = false;
            sum_w += p.first;
        }
        if (same_h && sum_w == S)
            ok = true;
    }
    if (!ok)
    {
        bool same_w = true;
        int sum_h = 0;
        for (auto &p : rects)
        {
            if (p.first != S)
                same_w = false;
            sum_h += p.second;
        }
        if (same_w && sum_h == S)
            ok = true;
    }
    if (!ok)
    {
        rep(i, 0, 2)
        {
            if (ok) break;
            rep(j, i + 1, 2)
            {
                if (ok) break;
                int k = 3 - i - j;
                int li = rects[i].first, bi = rects[i].second;
                int lj = rects[j].first, bj = rects[j].second;
                int lk = rects[k].first, bk = rects[k].second;
                if (li == lj && bi + bj == S)
                {
                    if (bk == S && li + lk == S)
                    {
                        ok = true;
                        break;
                    }
                }
                if (bi == bj && li + lj == S)
                {
                    if (lk == S && bi + bk == S)
                    {
                        ok = true;
                        break;
                    }
                }
            }
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
