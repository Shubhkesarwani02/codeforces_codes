#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define output(v)     \
    for (auto &i : v) \
    cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define rev(a) a.rbegin(), a.rend()
using namespace std;

void helper()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    input(a);

    int ans = 0;

    {
        vi right;
        for (int i = 1; i < n; i++)
            right.pb(a[i]);

        sort(rev(right));
        int sumr = 0;
        for (int i = 0; i < k; i++)
            sumr += right[i];
        ans = max(ans, a[0] + sumr);
    }

    {
        vi left;
        for (int i = 0; i < n - 1; i++)
            left.pb(a[i]);
        sort(rev(left));
        int suml = 0;
        for (int i = 0; i < k; i++)
            suml += left[i];
        ans = max(ans, a[n - 1] + suml);
    }

    for (int i = 1; i < n - 1; i++)
    {
        vi left, right;
        for (int j = 0; j < i; j++)
            left.pb(a[j]);

        for (int j = i + 1; j < n; j++)
            right.pb(a[j]);

        sort(rev(left));
        sort(rev(right));
        int ls = left.size();
        int rs = right.size();

        vector<int> leftPrefix(ls + 1, 0), rightPrefix(rs + 1, 0);
        for (int j = 0; j < ls; j++)
            leftPrefix[j + 1] = leftPrefix[j] + left[j];
        for (int j = 0; j < rs; j++)
            rightPrefix[j + 1] = rightPrefix[j] + right[j];

        int best = 0;
        int low = max((int)1, k - (int)rs);
        int high = min(k - 1, (int)ls);
        for (int r = low; r <= high; r++)
        {
            if ((k - r) <= rs && (k - r) >= 1)
            {
                int temp = leftPrefix[r] + rightPrefix[k - r];
                best = max(best, temp);
            }
        }
        if (best > 0)
            ans = max(ans, a[i] + best);
    }
    cout << ans << endl;
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
