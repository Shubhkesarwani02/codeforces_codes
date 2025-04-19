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
    int n, k;
    cin >> n >> k;
    vi l(n), r(n);
    input(l);
    input(r);

    vi max_lr(n), min_lr(n);
    int total_max = 0;

    rep(i, 0, n - 1)
    {
        max_lr[i] = max(l[i], r[i]);
        min_lr[i] = min(l[i], r[i]);
        total_max += max_lr[i];
    }

    sort(all(min_lr), greater<int>());

    int sum_top = 0;
    rep(i, 0, k - 2)
    {
        if (i >= n) break;
        sum_top += min_lr[i];
    }

    cout << total_max + sum_top + 1 << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
