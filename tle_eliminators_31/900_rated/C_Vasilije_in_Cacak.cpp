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
    int n, k, x;
    cin >> n >> k >> x;

    int min_sum = k * (k + 1) / 2;
    int max_sum = k * (2 * n - k + 1) / 2;

    if (x >= min_sum && x <= max_sum)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
