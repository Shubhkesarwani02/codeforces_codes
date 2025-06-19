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

int bfs_moves(int n, int k)
{
    if (n == 1)
        return 0;
    if (k == 1)
        return (n == 1 ? 0 : (int)1e18);
    if (n <= k)
        return 1;
    unordered_set<int> vis;
    vis.reserve(256);
    queue<pair<int, int>> q;
    q.push({n, 0});
    vis.insert(n);
    while (!q.empty())
    {
        auto top = q.front();
        int cur = top.first;
        int d = top.second;
        q.pop();
        if (cur <= k)
            return d + 1;
        int lim = sqrt(cur);
        for (int i = 2; i <= lim; i++)
        {
            if (cur % i == 0)
            {
                int d1 = i, d2 = cur / i;
                if (d1 <= k)
                {
                    int nxt = cur / d1;
                    if (!vis.count(nxt))
                    {
                        if (nxt == 1)
                            return d + 1;
                        vis.insert(nxt);
                        q.push({nxt, d + 1});
                    }
                }
                if (d2 != d1 && d2 <= k)
                {
                    int nxt = cur / d2;
                    if (!vis.count(nxt))
                    {
                        if (nxt == 1)
                            return d + 1;
                        vis.insert(nxt);
                        q.push({nxt, d + 1});
                    }
                }
            }
        }
    }
    return (int)1e18;
}

int gcd(int a, int b)
{
    while (b)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void helper()
{
    int x, y, k;
    cin >> x >> y >> k;
    if (x == y)
    {
        cout << 0 << "\n";
        return;
    }
    int g = gcd(x, y);
    int p = y / g;
    int q = x / g;
    int mp = bfs_moves(p, k);
    int mq = bfs_moves(q, k);
    if (mp >= (int)1e18 || mq >= (int)1e18)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (mp + mq) << endl;
    }
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
