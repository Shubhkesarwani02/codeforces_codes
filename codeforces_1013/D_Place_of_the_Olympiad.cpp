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

int solve(int m, int L)
{
    if (m <= L)
        return m;
    int r0 = (m + 1) / (L + 1);
    int r1 = r0 + 1;
    int candidate1 = r0 * L;
    int candidate2 = m - r1 + 1;
    return max(candidate1, candidate2);
}

void helper()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (k <= n)
    {
        cout << 1 << endl;
        return;
    }

    int kk = (k + n - 1) / n;

    int low = 1, high = m, ans = m;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (solve(m, mid) >= kk)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
