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

vector<int> F;

bool can_fit_all_cubes(array<int, 3> dims, int n)
{
    rep(h_idx, 0, 2)
    {
        int H = dims[h_idx];
        int w = dims[(h_idx + 1) % 3];
        int l = dims[(h_idx + 2) % 3];
        vector<tuple<int, int, int>> supports;
        supports.pb(make_tuple(0LL, w, l));
        bool ok = true;
        for (int i = n; i >= 1; i--)
        {
            int side = F[i];
            int best_idx = -1;
            int best_h = LLONG_MAX;
            rep(idx, 0, (int)supports.size() - 1)
            {
                auto t = supports[idx];
                int hs = get<0>(t);
                int ws = get<1>(t);
                int ls = get<2>(t);
                if (ws >= side && ls >= side && hs + side <= H)
                {
                    if (hs < best_h)
                    {
                        best_h = hs;
                        best_idx = idx;
                    }
                }
            }
            if (best_idx < 0)
            {
                ok = false;
                break;
            }
            auto t = supports[best_idx];
            int hs = get<0>(t);
            int ws = get<1>(t);
            int ls = get<2>(t);
            supports.erase(supports.begin() + best_idx);
            if (ws - side > 0)
                supports.pb(make_tuple(hs, ws - side, side));
            if (ls - side > 0)
                supports.pb(make_tuple(hs, ws, ls - side));
            supports.pb(make_tuple(hs + side, side, side));
        }
        if (ok)
            return true;
    }
    return false;
}

void helper()
{
    int n, m;
    cin >> n >> m;
    vector<array<int, 3>> dims_list(m);
    rep(i, 0, m - 1)
    {
        cin >> dims_list[i][0] >> dims_list[i][1] >> dims_list[i][2];
    }
    unordered_map<long long, bool> cache;
    string result;
    result.reserve(m);
    for (auto &d : dims_list)
    {
        array<int, 3> s = d;
        sort(all(s));
        long long key = s[0] * 1000000LL + s[1] * 1000LL + s[2];
        if (!cache.count(key))
        {
            cache[key] = can_fit_all_cubes(d, n);
        }
        result.push_back(cache[key] ? '1' : '0');
    }
    cout << result << "\n";
}

signed main()
{
    F.resize(11);
    F[1] = 1;
    F[2] = 2;
    rep(i, 3, 10)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
