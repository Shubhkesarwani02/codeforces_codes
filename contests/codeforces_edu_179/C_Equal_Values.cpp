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
    vi a(n + 1);
    rep(i, 1, n) cin >> a[i];
    vector<vi> pos(n + 1);
    rep(i, 1, n) pos[a[i]].pb(i);
    int answer = LLONG_MAX;
    rep(v, 1, n)
    {
        if (pos[v].empty())
            continue;
        auto &pts = pos[v];
        vector<pii> blocks;
        int start = pts[0], prev = pts[0];
        for (int idx = 1; idx < (int)pts.size(); idx++)
        {
            if (pts[idx] == prev + 1)
                prev = pts[idx];
            else
            {
                blocks.pb({start, prev});
                start = pts[idx];
                prev = pts[idx];
            }
        }
        blocks.pb({start, prev});
        int tblocks = blocks.size();
        int C_v;
        if (tblocks == 1 && blocks[0].first == 1 && blocks[0].second == n)
        {
            C_v = 0;
        }
        else
        {
            int bestFactor = LLONG_MAX;
            {
                auto pr = blocks[0];
                int l1 = pr.first, r1 = pr.second;
                if (l1 == 1)
                    bestFactor = min(bestFactor, (int)(n - r1));
            }
            {
                auto pr = blocks[tblocks - 1];
                int lt = pr.first, rt = pr.second;
                if (rt == n)
                    bestFactor = min(bestFactor, (int)(lt - 1));
            }
            for (auto &pr : blocks)
            {
                int l = pr.first, r = pr.second;
                bestFactor = min(bestFactor, (l - 1) + (n - r));
            }
            C_v = bestFactor * v;
        }
        answer = min(answer, C_v);
    }
    cout << answer << endl;
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
