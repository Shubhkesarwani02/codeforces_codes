#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
#define vi vector<int>
#define pii pair<ull, int>
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define all(a) a.begin(), a.end()
#define tpp   \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;

void helper()
{
    int n;
    ull k;
    cin >> n >> k;
    vi a(n);
    input(a);
    ull rem = k;
    ull total = 0;
    vector<ull> y(n);
    for (int i = 0; i < n; i++)
    {
        y[i] = (ull)a[i];
        total += __builtin_popcountll(y[i]);
    }
    auto cmp = [](const pii &a, const pii &b)
    {
        return a.first > b.first;
    };
    priority_queue<pii, vector<pii>, decltype(cmp)> pq(cmp);
    for (int i = 0; i < n; i++)
    {
        ull inv = ~y[i];
        int p = __builtin_ctzll(inv);
        ull cost = 1ULL << p;
        pq.emplace(cost, i);
    }
    while (!pq.empty())
    {
        auto it = pq.top();
        int cost = it.first;
        int i = it.second;
        if (cost > rem)
            break;
        pq.pop();
        rem -= cost;
        total += 1;
        y[i] += cost;
        ull inv = ~y[i];
        int p = __builtin_ctzll(inv);
        ull next_cost = 1ULL << p;
        pq.emplace(next_cost, i);
    }
    cout << total << "\n";
}

signed main()
{
    tpp helper();
    return 0;
}
