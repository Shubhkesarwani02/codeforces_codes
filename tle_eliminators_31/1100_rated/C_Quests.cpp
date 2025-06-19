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

    vi a(n), b(n);
    input(a);
    input(b);

    int res = 0, sum = 0, mx = 0;

    for (int i = 0; i < min(n, k); i++)
    {
        sum += a[i];
        mx = max(mx, b[i]);
        // check the reward(sum of all quests  score) afetr every split
        res = max(res, sum + mx * (k - i - 1));
    }

    cout << res << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
